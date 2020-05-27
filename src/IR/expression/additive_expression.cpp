#include "ast/ast.h"
#include <iostream>

// additive_expression -> multiplicative_expression
// (AdditiveExpression -> MultiplicativeExpression)
IRValuePtr AdditiveExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "AdditiveExpression Not implemented!" << std::endl;
    return nullptr;
}

// additive_expression -> additive_expression '+' multiplicative_expression
// (AdditiveExpression -> AdditiveExpression Add MultiplicativeExpression)
IRValuePtr AdditiveExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "AdditiveExpression Not implemented!" << std::endl;
    return nullptr;
}

// additive_expression -> additive_expression '-' multiplicative_expression
// (AdditiveExpression -> AdditiveExpression Sub MultiplicativeExpression)
IRValuePtr AdditiveExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "AdditiveExpression Not implemented!" << std::endl;
    return nullptr;
}

