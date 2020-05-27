#include "ast/ast.h"
#include <iostream>

// conditional_expression -> logical_or_expression
// (ConditionalExpression -> LogicalOrExpression)
IRValuePtr ConditionalExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ConditionalExpression Not implemented!" << std::endl;
    return nullptr;
}

// conditional_expression -> logical_or_expression '?' expression ':' conditional_expression
// (ConditionalExpression -> LogicalOrExpression Question Expression Colon ConditionalExpression)
IRValuePtr ConditionalExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ConditionalExpression Not implemented!" << std::endl;
    return nullptr;
}

