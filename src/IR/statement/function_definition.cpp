#include "ast/ast.h"
#include <iostream>

// These function will only be called with parsing context PARSING_FUNCTION

// function_definition -> declaration_specifiers declarator declaration_list compound_statement
// (FunctionDefinition -> DeclarationSpecifiers Declarator DeclarationList CompoundStatement)
IRValuePtr FunctionDefinition1::GenerateIR(Context &context) {
    // TODO: implement me!
    std::cerr << "FunctionDefinition1 Not implemented!" << std::endl;
    return nullptr;
}

// function_definition -> declaration_specifiers declarator compound_statement
// (FunctionDefinition -> DeclarationSpecifiers Declarator CompoundStatement)
IRValuePtr FunctionDefinition2::GenerateIR(Context &context) {
    this->declarationSpecifiersAst1->GenerateIR(context);
    this->declaratorAst2->GenerateIR(context);
    // get the parsed data (stored in AST access with reference)
    Type type = declarationSpecifiersAst1->specifierType;
    std::string &identifier = declaratorAst2->identifier;
    auto &parameterList = declaratorAst2->parameterList;
    // generate IR for function
    // check function pool
    auto &pool = context.functionPool;
    bool hasDeclared = false; // may change
    if (pool.find(identifier) != pool.end()) {
        if (pool[identifier]->hasDefined) {
            // already defined
            context.error("Function " + identifier + " already defined.");
            return nullptr;
        } else {
            // in function pool but not defined -> declared
            hasDeclared = true;
        }
    }
    // not defined
    if (hasDeclared) {
        // compare parameter list
        auto &func = pool[identifier];
        if (func->returnType != type) {
            context.error("Function " + identifier + " return type mismatched,"
                          + " expecting " + TypeToStr[func->returnType]
                          + " but found " + TypeToStr[type] + ".");
        }
        if (func->parameters.size() != parameterList.size()) {
            context.error("Function " + identifier + " parameter count mismatched.");
        }
        for (int i = 0; i < func->parameters.size(); i++) {
            if (func->parameters[i].first != parameterList[i].first) {
                context.error("Function " + identifier + " parameter type mismatched."
                              + " expecting " + TypeToStr[func->parameters[i].first]
                              + " but found " + TypeToStr[parameterList[i].first] + ".");
            }
        }
    }
    // new function definition
    // construct FunctionValuePtr
    FunctionValuePtr funcValue = std::make_shared<FunctionValue>(type, parameterList, true);
    // put into the pool
    pool.insert({identifier, funcValue});
    // init stack block & parse compound statement
    context.blockStack.push_back(funcValue);
    this->compoundStatementAst3->GenerateIR(context);
    // generate IR code
    context.ir.functionDefinition(funcValue);
    // pop the block from stack
    context.blockStack.pop_back();
    return nullptr;
}

// function_definition -> declarator declaration_list compound_statement
// (FunctionDefinition -> Declarator DeclarationList CompoundStatement)
IRValuePtr FunctionDefinition3::GenerateIR(Context &context) {
    std::cerr << "FunctionDefinition3 Not implemented!" << std::endl;
    return nullptr;
}

// function_definition -> declarator compound_statement
// (FunctionDefinition -> Declarator CompoundStatement)
IRValuePtr FunctionDefinition4::GenerateIR(Context &context) {
    // TODO: implement me!
    std::cerr << "FunctionDefinition4 Not implemented!" << std::endl;
    return nullptr;
}

