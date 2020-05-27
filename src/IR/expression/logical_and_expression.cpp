#include "ast/ast.h"
#include <iostream>

// logical_and_expression -> inclusive_or_expression
// (LogicalAndExpression -> InclusiveOrExpression)
IRValuePtr LogicalAndExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "LogicalAndExpression Not implemented!" << std::endl;
    return nullptr;
}

// logical_and_expression -> logical_and_expression AND_OP inclusive_or_expression
// (LogicalAndExpression -> LogicalAndExpression AndOp InclusiveOrExpression)
IRValuePtr LogicalAndExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "LogicalAndExpression Not implemented!" << std::endl;
    return nullptr;
}

