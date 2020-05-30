#include "ast/ast.h"
#include <iostream>

// initializer -> assignment_expression
// (Initializer -> AssignmentExpression)
IRValuePtr Initializer1::GenerateIR(Context& context) {
    // TODO: unknown implementation...
    IRValuePtr child = this->assignmentExpressionAst1->GenerateIR(context);
    this->initializerVector = std::make_shared<std::vector<IRValuePtr>>();
    this->initializerVector->push_back(child);
    return nullptr;
}

// initializer -> '{' initializer_list '}'
// (Initializer -> LCurly InitializerList RCurly)
IRValuePtr Initializer2::GenerateIR(Context& context) {
    this->initializerListAst2->GenerateIR(context);
    this->initializerVector = this->initializerListAst2->initializerVector;
    return nullptr;
}

// initializer -> '{' initializer_list ',' '}'
// (Initializer -> LCurly InitializerList Comma RCurly)
IRValuePtr Initializer3::GenerateIR(Context& context) {
    this->initializerListAst2->GenerateIR(context);
    this->initializerVector = this->initializerListAst2->initializerVector;
    return nullptr;
}

