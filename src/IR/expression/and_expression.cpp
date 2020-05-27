#include "ast/ast.h"
#include <iostream>

// and_expression -> equality_expression
// (AndExpression -> EqualityExpression)
IRValuePtr AndExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "AndExpression Not implemented!" << std::endl;
    return nullptr;
}

// and_expression -> and_expression '&' equality_expression
// (AndExpression -> AndExpression And EqualityExpression)
IRValuePtr AndExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "AndExpression Not implemented!" << std::endl;
    return nullptr;
}

