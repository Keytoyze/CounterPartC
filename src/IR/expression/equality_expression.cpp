#include "ast/ast.h"
#include <iostream>

// equality_expression -> relational_expression
// (EqualityExpression -> RelationalExpression)
IRValuePtr EqualityExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "EqualityExpression Not implemented!" << std::endl;
    return nullptr;
}

// equality_expression -> equality_expression EQ_OP relational_expression
// (EqualityExpression -> EqualityExpression EqOp RelationalExpression)
IRValuePtr EqualityExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "EqualityExpression Not implemented!" << std::endl;
    return nullptr;
}

// equality_expression -> equality_expression NE_OP relational_expression
// (EqualityExpression -> EqualityExpression NeOp RelationalExpression)
IRValuePtr EqualityExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "EqualityExpression Not implemented!" << std::endl;
    return nullptr;
}

