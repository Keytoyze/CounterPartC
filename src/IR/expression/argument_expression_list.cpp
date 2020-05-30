#include "ast/ast.h"
#include <iostream>

// argument_expression_list -> assignment_expression
// (ArgumentExpressionList -> AssignmentExpression)


// not able to type check without function name 

IRValuePtr ArgumentExpressionList1::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "ArgumentExpressionList Not implemented!" << std::endl;
    //return nullptr;

    IRValuePtr p = assignmentExpressionAst1->GenerateIR(context);

    context.ir.argument(p);

    return p;
}

// argument_expression_list -> argument_expression_list ',' assignment_expression
// (ArgumentExpressionList -> ArgumentExpressionList Comma AssignmentExpression)
IRValuePtr ArgumentExpressionList2::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "ArgumentExpressionList Not implemented!" << std::endl;
    //return nullptr;

    IRValuePtr p1 = argumentExpressionListAst1->GenerateIR(context);
    IRValuePtr p2 = assignmentExpressionAst3->GenerateIR(context);

    context.ir.argument(p2);

    return p2;
}

