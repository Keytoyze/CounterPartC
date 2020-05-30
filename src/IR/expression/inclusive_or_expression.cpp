#include "ast/ast.h"
#include <iostream>

// inclusive_or_expression -> exclusive_or_expression
// (InclusiveOrExpression -> ExclusiveOrExpression)
IRValuePtr InclusiveOrExpression1::GenerateIR(Context& context) {
    return exclusiveOrExpressionAst1->GenerateIR(context);
}

// inclusive_or_expression -> inclusive_or_expression '|' exclusive_or_expression
// (InclusiveOrExpression -> InclusiveOrExpression Vertical ExclusiveOrExpression)
IRValuePtr InclusiveOrExpression2::GenerateIR(Context& context) {
    IRValuePtr p1 = inclusiveOrExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = exclusiveOrExpressionAst3->GenerateIR(context);

    if(p1->type!=TYPE_INT||p2->type!=TYPE_INT){
        std::cerr<<"type error in ExclusiveOrExpression2"<<std::endl;
    }

    IRValuePtr p3 = context.newVar(p1->type,false);
   
    context.ir.operation(p3,OP_OR,p1,p2);

    return p3;
}

