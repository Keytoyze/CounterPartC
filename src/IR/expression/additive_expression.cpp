#include "ast/ast.h"
#include <iostream>

// additive_expression -> multiplicative_expression
// (AdditiveExpression -> MultiplicativeExpression)
IRValuePtr AdditiveExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    return multiplicativeExpressionAst1->GenerateIR(context);

    //    std::cerr << "AdditiveExpression Not implemented!" << std::endl;
    //  return nullptr;
}

// additive_expression -> additive_expression '+' multiplicative_expression
// (AdditiveExpression -> AdditiveExpression Add MultiplicativeExpression)
IRValuePtr AdditiveExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    IRValuePtr p1 = additiveExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = multiplicativeExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<< "Different type for two variable in additive expression 2"<<std::endl;

    IRValuePtr p3 = context.newVar(p1->type,false);
    context.ir.operation(p3,OP_ADD,p1,p2);

    return p3;
    //std::cerr << "AdditiveExpression Not implemented!" << std::endl;
    //return nullptr;
}

// additive_expression -> additive_expression '-' multiplicative_expression
// (AdditiveExpression -> AdditiveExpression Sub MultiplicativeExpression)
IRValuePtr AdditiveExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "AdditiveExpression Not implemented!" << std::endl;
    //return nullptr;

    IRValuePtr p1 = additiveExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = multiplicativeExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<< "Different type for two variable in additive expression 3"<<std::endl;

    IRValuePtr p3 = context.newVar(p1->type,false);
    context.ir.operation(p3,OP_SUB,p1,p2);

    return p3;
}

