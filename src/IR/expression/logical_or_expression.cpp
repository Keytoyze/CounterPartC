#include "ast/ast.h"
#include <iostream>

// logical_or_expression -> logical_and_expression
// (LogicalOrExpression -> LogicalAndExpression)
IRValuePtr LogicalOrExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "LogicalOrExpression Not implemented!" << std::endl;
    return nullptr;
}

// logical_or_expression -> logical_or_expression OR_OP logical_and_expression
// (LogicalOrExpression -> LogicalOrExpression OrOp LogicalAndExpression)
IRValuePtr LogicalOrExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "LogicalOrExpression Not implemented!" << std::endl;
    return nullptr;
}

