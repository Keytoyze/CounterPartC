#include "ast/ast.h"
#include <iostream>

// shift_expression -> additive_expression
// (ShiftExpression -> AdditiveExpression)
IRValuePtr ShiftExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// shift_expression -> shift_expression LEFT_OP additive_expression
// (ShiftExpression -> ShiftExpression LeftOp AdditiveExpression)
IRValuePtr ShiftExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// shift_expression -> shift_expression RIGHT_OP additive_expression
// (ShiftExpression -> ShiftExpression RightOp AdditiveExpression)
IRValuePtr ShiftExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

