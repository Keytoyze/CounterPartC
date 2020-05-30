#include "ast/ast.h"
#include <iostream>

// equality_expression -> relational_expression
// (EqualityExpression -> RelationalExpression)
IRValuePtr EqualityExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "EqualityExpression Not implemented!" << std::endl;
    //return nullptr;
    return relationalExpressionAst1->GenerateIR(context);
}

// equality_expression -> equality_expression EQ_OP relational_expression
// (EqualityExpression -> EqualityExpression EqOp RelationalExpression)
IRValuePtr EqualityExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "EqualityExpression Not implemented!" << std::endl;
    //return nullptr;
    IRValuePtr p1 = equalityExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = relationalExpressionAst3->GenerateIR(context);

    if(p1->type!=p2->type)
        std::cerr<<"different type for two variable in EqualityExpression2"<<std::endl;

    IRValuePtr p3 = context.newVar(TYPE_BOOL,false);
    context.ir.operation(p3,OP_EQ,p1,p2);
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
    context.ir.operation(p3,OP_NEQ,p1,p2);
    return p3;
}
