#include "ast/ast.h"
#include <iostream>

// unary_expression -> postfix_expression
// (UnaryExpression -> PostfixExpression)
IRValuePtr UnaryExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// unary_expression -> INC_OP unary_expression
// (UnaryExpression -> IncOp UnaryExpression)
IRValuePtr UnaryExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// unary_expression -> DEC_OP unary_expression
// (UnaryExpression -> DecOp UnaryExpression)
IRValuePtr UnaryExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// unary_expression -> unary_operator cast_expression
// (UnaryExpression -> UnaryOperator CastExpression)
IRValuePtr UnaryExpression4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// unary_expression -> SIZEOF unary_expression
// (UnaryExpression -> Sizeof UnaryExpression)
IRValuePtr UnaryExpression5::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// unary_expression -> SIZEOF '(' type_name ')'
// (UnaryExpression -> Sizeof LRound TypeName RRound)
IRValuePtr UnaryExpression6::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

