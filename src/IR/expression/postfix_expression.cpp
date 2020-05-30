#include "ast/ast.h"
#include <iostream>

// postfix_expression -> primary_expression
// (PostfixExpression -> PrimaryExpression)
IRValuePtr PostfixExpression1::GenerateIR(Context& context) {
    return primaryExpressionAst1->GenerateIR(context);
}

// postfix_expression -> postfix_expression '[' expression ']'
// (PostfixExpression -> PostfixExpression LSquare Expression RSquare)
IRValuePtr PostfixExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "PostfixExpression Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression '(' ')'
// (PostfixExpression -> PostfixExpression LRound RRound)
IRValuePtr PostfixExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "PostfixExpression Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression '(' argument_expression_list ')'
// (PostfixExpression -> PostfixExpression LRound ArgumentExpressionList RRound)
IRValuePtr PostfixExpression4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "PostfixExpression Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression '.' IDENTIFIER
// (PostfixExpression -> PostfixExpression Period Identifier)
IRValuePtr PostfixExpression5::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "PostfixExpression Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression PTR_OP IDENTIFIER
// (PostfixExpression -> PostfixExpression PtrOp Identifier)
IRValuePtr PostfixExpression6::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "PostfixExpression Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression INC_OP
// (PostfixExpression -> PostfixExpression IncOp)
IRValuePtr PostfixExpression7::GenerateIR(Context& context) {
    // TODO: implement me!
    IRValuePtr p1 = postfixExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = context.newVar(p1->type,false);
    IRValuePtr p3 = context.newVar(p1->type,false);
    IntConstant cons;
    cons.value=1;
    context.ir.valueToValue(p3,p1);
    context.ir.constantToValue(p2,cons);
    context.ir.operation(p1,OP_ADD,p1,p2);

    return p3;
}

// postfix_expression -> postfix_expression DEC_OP
// (PostfixExpression -> PostfixExpression DecOp)
IRValuePtr PostfixExpression8::GenerateIR(Context& context) {
    IRValuePtr p1 = postfixExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = context.newVar(p1->type,false);
    IRValuePtr p3 = context.newVar(p1->type,false);
    IntConstant cons;
    cons.value=1;
    context.ir.valueToValue(p3,p1);
    context.ir.constantToValue(p2,cons);
    context.ir.operation(p1,OP_SUB,p1,p2);

    return p3;
}

