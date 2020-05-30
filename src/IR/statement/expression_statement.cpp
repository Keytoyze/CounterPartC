#include "ast/ast.h"
#include <iostream>

// expression_statement -> ';'
// (ExpressionStatement -> SimicolonSingle)
IRValuePtr ExpressionStatement1::GenerateIR(Context& context) {
    return nullptr;
}

// expression_statement -> expression ';'
// (ExpressionStatement -> Expression SimicolonSingle)
IRValuePtr ExpressionStatement2::GenerateIR(Context& context) {
    this->expressionAst1->GenerateIR(context);
    return nullptr;
}

