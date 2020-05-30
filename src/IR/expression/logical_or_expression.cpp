#include "ast/ast.h"
#include <iostream>

// logical_or_expression -> logical_and_expression
// (LogicalOrExpression -> LogicalAndExpression)
IRValuePtr LogicalOrExpression1::GenerateIR(Context& context) {
    return this->logicalAndExpressionAst1->GenerateIR(context);
}

// logical_or_expression -> logical_or_expression OR_OP logical_and_expression
// (LogicalOrExpression -> LogicalOrExpression OrOp LogicalAndExpression)
IRValuePtr LogicalOrExpression2::GenerateIR(Context& context) {
    IRValuePtr p1 = logicalOrExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = logicalAndExpressionAst3->GenerateIR(context);

    if(p1->type!=TYPE_BOOL||p2->type!=TYPE_BOOL)
        std::cerr<< "not bool type in LogicalOrExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(p1->type,false);
    context.ir.operation(p3,LOGICAL_OR,p1,p2);

    return p3;
}

