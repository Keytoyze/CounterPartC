#include "ast/ast.h"
#include <iostream>

// inclusive_or_expression -> exclusive_or_expression
// (InclusiveOrExpression -> ExclusiveOrExpression)
IRValuePtr InclusiveOrExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// inclusive_or_expression -> inclusive_or_expression '|' exclusive_or_expression
// (InclusiveOrExpression -> InclusiveOrExpression Vertical ExclusiveOrExpression)
IRValuePtr InclusiveOrExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

