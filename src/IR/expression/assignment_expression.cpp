#include "ast/ast.h"
#include <iostream>

// assignment_expression -> conditional_expression
// (AssignmentExpression -> ConditionalExpression)
IRValuePtr AssignmentExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// assignment_expression -> unary_expression assignment_operator assignment_expression
// (AssignmentExpression -> UnaryExpression AssignmentOperator AssignmentExpression)
IRValuePtr AssignmentExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

