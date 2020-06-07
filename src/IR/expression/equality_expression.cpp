#include "ast/ast.h"
#include <iostream>
#include <IR/CodeOptimization.h>

// equality_expression -> relational_expression
// (EqualityExpression -> RelationalExpression)
IRValuePtr EqualityExpression1::GenerateIR(Context& context) {
    return relationalExpressionAst1->GenerateIR(context);
}

// equality_expression -> equality_expression EQ_OP relational_expression
// (EqualityExpression -> EqualityExpression EqOp RelationalExpression)
IRValuePtr EqualityExpression2::GenerateIR(Context& context) {
    IRValuePtr p1 = equalityExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = relationalExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<<"different type for two variable in EqualityExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(TYPE_BOOL,false);

    if (p1->isConstant && p2->isConstant) {
        //
        CodeOptimization::evalEqualityExpression(p1, p2, p3);
    }

    if(p1->type==TYPE_INT)
        context.ir.operation_int(p3,OP_EQ,p1,p2);
    else
    {
        context.ir.operation_double(p3,OP_EQ,p1,p2);
    }
    return p3;
}

// equality_expression -> equality_expression NE_OP relational_expression
// (EqualityExpression -> EqualityExpression NeOp RelationalExpression)
IRValuePtr EqualityExpression3::GenerateIR(Context& context) {
    IRValuePtr p1 = equalityExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = relationalExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<<"different type for two variable in EqualityExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(TYPE_BOOL,false);
<<<<<<< HEAD
    if(p1->type==TYPE_INT)
        context.ir.operation_int(p3,OP_NEQ,p1,p2);
    else
    {
        context.ir.operation_double(p3,OP_NEQ,p1,p2);
    }
    
=======

    if (p1->isConstant && p2->isConstant) {
        //
        CodeOptimization::evalEqualityExpression(p1, p2, p3);
    }

    context.ir.operation(p3,OP_NEQ,p1,p2);
>>>>>>> de8716e... [ADD] CodeOpt Unreachable code
    return p3;
}
