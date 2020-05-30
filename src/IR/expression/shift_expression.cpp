#include "ast/ast.h"
#include <iostream>

// shift_expression -> additive_expression
// (ShiftExpression -> AdditiveExpression)
IRValuePtr ShiftExpression1::GenerateIR(Context& context) {
    return additiveExpressionAst1->GenerateIR(context);
}

// shift_expression -> shift_expression LEFT_OP additive_expression
// (ShiftExpression -> ShiftExpression LeftOp AdditiveExpression)
IRValuePtr ShiftExpression2::GenerateIR(Context& context) {
    IRValuePtr p1 = shiftExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = additiveExpressionAst3->GenerateIR(context);

    if(p1->type!=TYPE_INT||p2->type!=TYPE_INT)
        std::cerr<< "wrong type for two variable inShiftExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(TYPE_INT,false);
    context.ir.operation(p3,OP_LS,p1,p2);

    return p3; 
}

// shift_expression -> shift_expression RIGHT_OP additive_expression
// (ShiftExpression -> ShiftExpression RightOp AdditiveExpression)
IRValuePtr ShiftExpression3::GenerateIR(Context& context) {
    IRValuePtr p1 = shiftExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = additiveExpressionAst3->GenerateIR(context);

    if(p1->type!=TYPE_INT||p2->type!=TYPE_INT)
        std::cerr<< "wrong type for two variable inShiftExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(TYPE_INT,false);
    context.ir.operation(p3,OP_RS,p1,p2);

    return p3; 
}

