#include "ast/ast.h"
#include <iostream>

// exclusive_or_expression -> and_expression
// (ExclusiveOrExpression -> AndExpression)
IRValuePtr ExclusiveOrExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ExclusiveOrExpression Not implemented!" << std::endl;
    return nullptr;
}

// exclusive_or_expression -> exclusive_or_expression '^' and_expression
// (ExclusiveOrExpression -> ExclusiveOrExpression Caret AndExpression)
IRValuePtr ExclusiveOrExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ExclusiveOrExpression Not implemented!" << std::endl;
    return nullptr;
}

