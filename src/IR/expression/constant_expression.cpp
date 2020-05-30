#include "ast/ast.h"
#include <iostream>

// constant_expression -> conditional_expression
// (ConstantExpression -> ConditionalExpression)
IRValuePtr ConstantExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "ConstantExpression Not implemented!" << std::endl;
    //return nullptr;
    return conditionalExpressionAst1->GenerateIR(context);
}

