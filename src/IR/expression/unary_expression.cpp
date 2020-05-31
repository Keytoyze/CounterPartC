#include "ast/ast.h"
#include <iostream>

// unary_expression -> postfix_expression
// (UnaryExpression -> PostfixExpression)
IRValuePtr UnaryExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    return postfixExpressionAst1->GenerateIR(context);
}

// unary_expression -> INC_OP unary_expression
// (UnaryExpression -> IncOp UnaryExpression)
IRValuePtr UnaryExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    IRValuePtr p1 = unaryExpressionAst2->GenerateIR(context);
    IntConstant cons;
    cons.value=1;
    if(p1->type !=TYPE_INT)
        std::cerr<<"not int type with ++"<<std::endl;
    IRValuePtr p2 = context.newVar(TYPE_INT,false);

    context.ir.constantToValue(p2,cons);
    context.ir.operation(p1,OP_ADD,p1,p2);

    return p1;
}

// unary_expression -> DEC_OP unary_expression
// (UnaryExpression -> DecOp UnaryExpression)
IRValuePtr UnaryExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    IRValuePtr p1 = unaryExpressionAst2->GenerateIR(context);
    IntConstant cons;
    cons.value=1;
    if(p1->type !=TYPE_INT)
        std::cerr<<"not int type with --"<<std::endl;
    IRValuePtr p2 = context.newVar(TYPE_INT,false);

    context.ir.constantToValue(p2,cons);
    context.ir.operation(p1,OP_SUB,p1,p2);

    return p1;
}

// unary_expression -> unary_operator cast_expression
// (UnaryExpression -> UnaryOperator CastExpression)
IRValuePtr UnaryExpression4::GenerateIR(Context& context) {
    IRValuePtr p = castExpressionAst2->GenerateIR(context);
    IntConstant icons;
    DoubleConstant dcons; 
    icons.value=0;
    dcons.value=0;
    if(dynamic_cast<UnaryOperator3*>(unaryOperatorAst1)!=nullptr){
        if(p->type!=TYPE_INT||p->type!=TYPE_DOUBLE)
            std::cerr<<"not capable type for UnaryExpression"<<std::endl;
        
    }
    else if(dynamic_cast<UnaryOperator4*>(unaryOperatorAst1)!=nullptr){
        IRValuePtr temp=context.newVar(p->type,false);
        if(p->type!=TYPE_INT||p->type!=TYPE_DOUBLE)
            std::cerr<<"not capable type for UnaryExpression"<<std::endl;
        context.ir.constantToValue(temp,icons);
        
        context.ir.operation(p,OP_SUB,temp,p);

        
    }
    else if(dynamic_cast<UnaryOperator5*>(unaryOperatorAst1)!=nullptr){
        IRValuePtr temp=context.newVar(p->type,false);
        if(p->type!=TYPE_INT)
            std::cerr<<"not capable type for UnaryExpression"<<std::endl;
        context.ir.constantToValue(temp,icons);
        context.ir.operation(p,OP_XOR,temp,p);

        
    }
    else if(dynamic_cast<UnaryOperator6*>(unaryOperatorAst1)!=nullptr){
        std::cerr<<"! not implemented"<<std::endl;
        return nullptr;
    }

    return p;
}

// unary_expression -> SIZEOF unary_expression
// (UnaryExpression -> Sizeof UnaryExpression)
IRValuePtr UnaryExpression5::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "sizeof Not implemented!" << std::endl;
    return nullptr;
}

// unary_expression -> SIZEOF '(' type_name ')'
// (UnaryExpression -> Sizeof LRound TypeName RRound)
IRValuePtr UnaryExpression6::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "sizeof Not implemented!" << std::endl;
    return nullptr;
}

