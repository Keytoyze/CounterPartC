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
    if (this->declarationType == DeclarationType::UNKNOWN) {
        context.error("Unknown type of declaration!!!!!");
        return nullptr;
    }
    this->declarationSpecifiersAst1->GenerateIR(context);
    this->initDeclaratorListAst2->GenerateIR(context);
    this->specifierType = declarationSpecifiersAst1->specifierType;
    // judge declaration type TODO: fix this (one fix is applied)
    if (this->declarationType == DeclarationType::UNKNOWN) {
        if (!this->initDeclaratorListAst2->identifier.empty()) {
            this->declarationType = DeclarationType::FUNCTION;
        } else {
            this->declarationType = DeclarationType::VARIABLE;
        }
    }
    if (this->declarationType == DeclarationType::FUNCTION) {
        // function declaration
        auto &funcName = this->initDeclaratorListAst2->identifier;
        auto type = this->specifierType;
        auto &parameterList = this->initDeclaratorListAst2->parameterList;
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
        std::cout << "Insert variable" << std::endl;
        std::cout << "type: " << TypeToStr(this->specifierType) << std::endl;

        auto variableInitPair = this->initDeclaratorListAst2->list;
        for (auto it = variableInitPair->begin(); it != variableInitPair->end(); it++) {
            std::cout << "identifier: " << (*it)->identifier << std::endl;
            auto initializerValue = (*it)->initializerValue;
            // TODO: array
            auto var = context.newVar(this->specifierType, false);
            context.blockStack.back()->varTable[(*it)->identifier] = var;
            if (initializerValue != nullptr) {
                context.ir.valueToValue(var, initializerValue->at(0));
            }
        }

//        context.blockStack.back();
    }

    return nullptr;
}

