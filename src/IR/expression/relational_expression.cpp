#include "ast/ast.h"
#include <iostream>

// relational_expression -> shift_expression
// (RelationalExpression -> ShiftExpression)
IRValuePtr RelationalExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    return shiftExpressionAst1->GenerateIR(context);
}

// relational_expression -> relational_expression '<' shift_expression
// (RelationalExpression -> RelationalExpression LAngle ShiftExpression)
IRValuePtr RelationalExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    IRValuePtr p1 = relationalExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = shiftExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<< "Different type for two variable in RelationalExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(TYPE_BOOL,false);
    context.ir.operation(p3,OP_LT,p1,p2);

    return p3;    
}

// relational_expression -> relational_expression '>' shift_expression
// (RelationalExpression -> RelationalExpression RAngle ShiftExpression)
IRValuePtr RelationalExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    IRValuePtr p1 = relationalExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = shiftExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<< "Different type for two variable in RelationalExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(TYPE_BOOL,false);
    context.ir.operation(p3,OP_GT,p1,p2);

    return p3;   
}

// relational_expression -> relational_expression LE_OP shift_expression
// (RelationalExpression -> RelationalExpression LeOp ShiftExpression)
IRValuePtr RelationalExpression4::GenerateIR(Context& context) {
    IRValuePtr p1 = relationalExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = shiftExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<< "Different type for two variable in RelationalExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(TYPE_BOOL,false);
    context.ir.operation(p3,OP_LTE,p1,p2);

    return p3;   
}

// relational_expression -> relational_expression GE_OP shift_expression
// (RelationalExpression -> RelationalExpression GeOp ShiftExpression)
IRValuePtr RelationalExpression5::GenerateIR(Context& context) {
    IRValuePtr p1 = relationalExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = shiftExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<< "Different type for two variable in RelationalExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(TYPE_BOOL,false);
    context.ir.operation(p3,OP_GTE,p1,p2);

    return p3;   
}

