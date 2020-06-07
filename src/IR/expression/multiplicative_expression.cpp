#include "ast/ast.h"
#include <iostream>

// multiplicative_expression -> cast_expression
// (MultiplicativeExpression -> CastExpression)
IRValuePtr MultiplicativeExpression1::GenerateIR(Context& context) {
    return castExpressionAst1->GenerateIR(context);
}

// multiplicative_expression -> multiplicative_expression '*' cast_expression
// (MultiplicativeExpression -> MultiplicativeExpression Mul CastExpression)
IRValuePtr MultiplicativeExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    
    IRValuePtr p1 = multiplicativeExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = castExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<< "Different type for two variable in MultiplicativeExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(p1->type,false);

    CodeOptimization::evalMultiplicativeExpression(p1, p2, p3, context, false);

    if(p1->type==TYPE_INT)
        context.ir.operation_int(p3,OP_MUL,p1,p2);
    else{
        context.ir.operation_double(p3,OP_MUL,p1,p2);
    }

    return p3;    
}

// multiplicative_expression -> multiplicative_expression '/' cast_expression
// (MultiplicativeExpression -> MultiplicativeExpression Div CastExpression)
IRValuePtr MultiplicativeExpression3::GenerateIR(Context& context) {
    IRValuePtr p1 = multiplicativeExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = castExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<< "Different type for two variable in MultiplicativeExpression3"<<std::endl;

    IRValuePtr p3 = context.newVar(p1->type,false);
<<<<<<< HEAD
    if(p1->type==TYPE_INT)
        context.ir.operation_int(p3,OP_DIV,p1,p2);
    else{
        context.ir.operation_double(p3,OP_DIV,p1,p2);
    }
=======
    CodeOptimization::evalMultiplicativeExpression(p1, p2, p3, context, true);
    context.ir.operation(p3,OP_DIV,p1,p2);
>>>>>>> d6553cf... [ADD] CodeOpt Constant folding

    return p3;   
}

// multiplicative_expression -> multiplicative_expression '%' cast_expression
// (MultiplicativeExpression -> MultiplicativeExpression Mod CastExpression)
IRValuePtr MultiplicativeExpression4::GenerateIR(Context& context) {
    IRValuePtr p1 = multiplicativeExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = castExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<< "Different type for two variable in MultiplicativeExpression4"<<std::endl;

    IRValuePtr p3 = context.newVar(p1->type,false);
    if(p1->type==TYPE_INT)
        context.ir.operation_int(p3,OP_MOD,p1,p2);
    else{
        context.ir.operation_double(p3,OP_MOD,p1,p2);
    }
    return p3;   
}

