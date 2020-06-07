#include "ast/ast.h"
#include <iostream>

// declaration -> declaration_specifiers ';'
// (Declaration -> DeclarationSpecifiers SimicolonSingle)
IRValuePtr Declaration1::GenerateIR(Context &context) {
    // TODO: implement me!
    this->declarationSpecifiersAst1->GenerateIR(context);
    std::cerr << "Declaration1 Not implemented!" << std::endl;
    return nullptr;
}

// declaration -> declaration_specifiers init_declarator_list ';'
// (Declaration -> DeclarationSpecifiers InitDeclaratorList SimicolonSingle)
IRValuePtr Declaration2::GenerateIR(Context &context) {
//    if (this->declarationType == DeclarationType::UNKNOWN) {
//        context.error("Unknown type of declaration!!!!!");
//        return nullptr;
//    }
    this->declarationSpecifiersAst1->GenerateIR(context);
    this->initDeclaratorListAst2->GenerateIR(context);
    this->specifierType = declarationSpecifiersAst1->specifierType;
    auto directDeclarator = this->initDeclaratorListAst2->directDeclarator;
    // judge declaration type TODO: fix this (one fix is applied)
    if (this->declarationType == DeclarationType::UNKNOWN) {
        // if (!directDeclarator->identifier.empty()) {
        //     this->declarationType = DeclarationType::FUNCTION;
        // } else {
        //     this->declarationType = DeclarationType::VARIABLE;
        // }
       context.error("Unknown type of declaration!!!!!");
    }
    if (this->declarationType == DeclarationType::FUNCTION) {
        // function declaration
        auto &funcName = directDeclarator->identifier;
        auto type = this->specifierType;
        auto &parameterList = directDeclarator->parameterList;
        std::cout << "Function declaration" << std::endl;
        auto &pool = context.functionPool;
        if (pool.find(funcName) != pool.end()) {
            if (pool[funcName]->hasDefined) {
                context.error("Function " + funcName + " already defined.");
            } else {
                context.error("Function " + funcName + " already declared.");
            }
        } else {
            // has not been declared or defined
            FunctionValuePtr funcValue = std::make_shared<FunctionValue>(type, parameterList, false);
            // add to function pool
            pool.insert({funcName, funcValue});
        }
    } else if (this->declarationType == DeclarationType::VARIABLE) {
        // variable declaration
        // assign value

        auto variableInitPair = this->initDeclaratorListAst2->list;
        for (auto it = variableInitPair->begin(); it != variableInitPair->end(); it++) {
            DirectDeclarator* directDeclarator = (*it)->directDeclarator;
            auto initializerValue = (*it)->initializerValue;

            IRValuePtr var;

            if (directDeclarator->isArray) {
                if (directDeclarator->isArrayHasSize) {
                    // int a[x]
                    var = context.newVar(this->specifierType, true, -1, directDeclarator->arraySize);
                } else {
                    // int a[] = {}
                    if (initializerValue == nullptr || initializerValue->size() == 0) {
                        context.error("Array without specified size should have initialize list!");
                        return nullptr;
                    }
                    var = context.newVar(this->specifierType, true, initializerValue->size());
                }
            } else if (directDeclarator->isPointer) {
                var = context.newVar(this->specifierType, true);
            } else {
                var = context.newVar(this->specifierType, false);
            }

            var->useAddress = false;
            context.blockStack.back()->varTable[directDeclarator->identifier] = var;

            // initialize
            if (initializerValue != nullptr && initializerValue->size() != 0) {
                if (directDeclarator->isArray) {
                    IRValuePtr tempAddress = context.newVar(Type::TYPE_INT, true);
                    context.ir.valueToValue(tempAddress, var);
                    IRValuePtr typeSize = context.newVar(Type::TYPE_INT, false);
                    IntConstant typeSizeConstant(sizeOf(this->specifierType));
                    context.ir.constantToValue(typeSize, typeSizeConstant);
                    for (auto it2 = initializerValue->begin(); it2 != initializerValue->end(); it2++) {
                        context.ir.valueToPtr(tempAddress, *it2);
                        // increase tempAddress
                        context.ir.operation(tempAddress, Oper::OP_ADD, tempAddress, typeSize);
                    }
                } else {
                    // pointer or value
                    if (context.optimizationEnabled(CONSTANT_FOLDING_FLAG)){
                        auto &irValue =  initializerValue->at(0);
                        if (irValue->isConstant) {
                            if (irValue->type == Type::TYPE_INT) {
                                auto intConst = IntConstant(irValue->constVal.intVal);
                                context.ir.constantToValue(irValue, intConst);
                                return nullptr;
                            } else if (irValue->type == Type::TYPE_DOUBLE) {
                                auto doubleConst = DoubleConstant();
                                doubleConst.value = irValue->constVal.doubleVal;
                                context.ir.constantToValue(irValue, doubleConst);
                                return nullptr;
                            }
                        }
                    }
                    context.ir.valueToValue(var, initializerValue->at(0));
                }
            }
            
        }
    }

    return nullptr;
}

