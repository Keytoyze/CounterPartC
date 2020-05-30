#include "ast/ast.h"
#include <iostream>

IRValuePtr getValueFromInitializer(Initializer* initializer, Context &context) {
    initializer->GenerateIR(context);
    if (initializer->initializerVector->size() != 1) {
        context.error("Not support struct assignment!");
        return nullptr;
    }
    return (*initializer->initializerVector)[0];
}

// initializer_list -> initializer
// (InitializerList -> Initializer)
IRValuePtr InitializerList1::GenerateIR(Context& context) {
    this->initializerVector = std::make_shared<std::vector<IRValuePtr>>();
    this->initializerVector->push_back(getValueFromInitializer(this->initializerAst1, context));
    return nullptr;
}

// initializer_list -> initializer_list ',' initializer
// (InitializerList -> InitializerList Comma Initializer)
IRValuePtr InitializerList2::GenerateIR(Context& context) {
    this->initializerListAst1->GenerateIR(context);
    this->initializerVector = this->initializerListAst1->initializerVector;
    this->initializerVector->push_back(getValueFromInitializer(this->initializerAst3, context));
    return nullptr;
}

