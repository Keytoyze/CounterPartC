#include "ast/ast.h"
#include <iostream>

// argument_expression_list -> assignment_expression
// (ArgumentExpressionList -> AssignmentExpression)
IRValuePtr ArgumentExpressionList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// argument_expression_list -> argument_expression_list ',' assignment_expression
// (ArgumentExpressionList -> ArgumentExpressionList Comma AssignmentExpression)
IRValuePtr ArgumentExpressionList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

