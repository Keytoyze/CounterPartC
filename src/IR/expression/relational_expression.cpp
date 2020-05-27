#include "ast/ast.h"
#include <iostream>

// relational_expression -> shift_expression
// (RelationalExpression -> ShiftExpression)
IRValuePtr RelationalExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// relational_expression -> relational_expression '<' shift_expression
// (RelationalExpression -> RelationalExpression LAngle ShiftExpression)
IRValuePtr RelationalExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// relational_expression -> relational_expression '>' shift_expression
// (RelationalExpression -> RelationalExpression RAngle ShiftExpression)
IRValuePtr RelationalExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// relational_expression -> relational_expression LE_OP shift_expression
// (RelationalExpression -> RelationalExpression LeOp ShiftExpression)
IRValuePtr RelationalExpression4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// relational_expression -> relational_expression GE_OP shift_expression
// (RelationalExpression -> RelationalExpression GeOp ShiftExpression)
IRValuePtr RelationalExpression5::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

