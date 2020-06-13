#include "ast/ast.h"
#include <iostream>

// exclusive_or_expression -> and_expression
// (ExclusiveOrExpression -> AndExpression)
IRValuePtr ExclusiveOrExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "ExclusiveOrExpression Not implemented!" << std::endl;
    //return nullptr;

    return andExpressionAst1->GenerateIR(context);
}

// exclusive_or_expression -> exclusive_or_expression '^' and_expression
// (ExclusiveOrExpression -> ExclusiveOrExpression Caret AndExpression)
IRValuePtr ExclusiveOrExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "ExclusiveOrExpression Not implemented!" << std::endl;
    //return nullptr;

    IRValuePtr p1 = exclusiveOrExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = andExpressionAst3->GenerateIR(context);

    if(p1->type!=TYPE_INT||p2->type!=TYPE_INT){
        std::cerr<<"type error in ExclusiveOrExpression2"<<std::endl;
    }

    IRValuePtr p3 = context.newVar(p1->type,false);
   
    context.ir.operation_int(p3,OP_XOR,p1,p2);

    return p3;
}

