#include "ast/ast.h"
#include <iostream>

// and_expression -> equality_expression
// (AndExpression -> EqualityExpression)
IRValuePtr AndExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "AndExpression Not implemented!" << std::endl;
    //return nullptr;
    return equalityExpressionAst1->GenerateIR(context);
}

// and_expression -> and_expression '&' equality_expression
// (AndExpression -> AndExpression And EqualityExpression)
IRValuePtr AndExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "AndExpression Not implemented!" << std::endl;
    //return nullptr;

    IRValuePtr p1 = andExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = equalityExpressionAst3->GenerateIR(context);

    IRValuePtr p3 = context.newVar(p1->type,false);
   
    context.ir.operation_int(p3,OP_AND,p1,p2);

    return p3;
}

