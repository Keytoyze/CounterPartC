#include "ast/ast.h"
#include <iostream>

// multiplicative_expression -> cast_expression
// (MultiplicativeExpression -> CastExpression)
IRValuePtr MultiplicativeExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "MultiplicativeExpression Not implemented!" << std::endl;
    return nullptr;
}

// multiplicative_expression -> multiplicative_expression '*' cast_expression
// (MultiplicativeExpression -> MultiplicativeExpression Mul CastExpression)
IRValuePtr MultiplicativeExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "MultiplicativeExpression Not implemented!" << std::endl;
    return nullptr;
}

// multiplicative_expression -> multiplicative_expression '/' cast_expression
// (MultiplicativeExpression -> MultiplicativeExpression Div CastExpression)
IRValuePtr MultiplicativeExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "MultiplicativeExpression Not implemented!" << std::endl;
    return nullptr;
}

// multiplicative_expression -> multiplicative_expression '%' cast_expression
// (MultiplicativeExpression -> MultiplicativeExpression Mod CastExpression)
IRValuePtr MultiplicativeExpression4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "MultiplicativeExpression Not implemented!" << std::endl;
    return nullptr;
}

