#include "ast/ast.h"
#include <iostream>

// argument_expression_list -> assignment_expression
// (ArgumentExpressionList -> AssignmentExpression)


// not able to type check without function name 

IRValuePtr ArgumentExpressionList1::GenerateIR(Context& context) {
    IRValuePtr p = assignmentExpressionAst1->GenerateIR(context);
    this->argumentList.push_back(p);
    // context.ir.argument(p);
    return nullptr;
}

// argument_expression_list -> argument_expression_list ',' assignment_expression
// (ArgumentExpressionList -> ArgumentExpressionList Comma AssignmentExpression)
IRValuePtr ArgumentExpressionList2::GenerateIR(Context& context) {
    argumentExpressionListAst1->GenerateIR(context);
    IRValuePtr p = assignmentExpressionAst3->GenerateIR(context);
    this->argumentList =
            this->argumentExpressionListAst1->argumentList;
    this->argumentList.push_back(p);
//    context.ir.argument(p2);
//
    return nullptr;
}

