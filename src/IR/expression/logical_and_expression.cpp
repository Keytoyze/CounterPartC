#include "ast/ast.h"
#include <iostream>

// logical_and_expression -> inclusive_or_expression
// (LogicalAndExpression -> InclusiveOrExpression)
IRValuePtr LogicalAndExpression1::GenerateIR(Context& context) {
    return inclusiveOrExpressionAst1->GenerateIR(context);
}

// logical_and_expression -> logical_and_expression AND_OP inclusive_or_expression
// (LogicalAndExpression -> LogicalAndExpression AndOp InclusiveOrExpression)
IRValuePtr LogicalAndExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "LogicalAndExpression Not implemented!" << std::endl;
    //return nullptr;
    IRValuePtr p1 = logicalAndExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = inclusiveOrExpressionAst3->GenerateIR(context);

    //if(p1->type!=TYPE_BOOL||p2->type!=TYPE_BOOL)
    //    std::cerr<< "not bool type in LogicalAndExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(p1->type,false);
    context.ir.operation(p3,LOGICAL_AND,p1,p2);

    return p3;
}

