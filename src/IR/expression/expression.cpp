#include "ast/ast.h"
#include <iostream>

// expression -> assignment_expression
// (Expression -> AssignmentExpression)
IRValuePtr Expression1::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "Expression Not implemented!" << std::endl;
    //return nullptr;

    return assignmentExpressionAst1->GenerateIR(context);
}

// expression -> expression ',' assignment_expression
// (Expression -> Expression Comma AssignmentExpression)
IRValuePtr Expression2::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "Expression Not implemented!" << std::endl;
    //return nullptr;

    expressionAst1->GenerateIR(context);
    return assignmentExpressionAst3->GenerateIR(context);
}

