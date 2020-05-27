#include "ast/ast.h"
#include <iostream>

// postfix_expression -> primary_expression
// (PostfixExpression -> PrimaryExpression)
IRValuePtr PostfixExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression '[' expression ']'
// (PostfixExpression -> PostfixExpression LSquare Expression RSquare)
IRValuePtr PostfixExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression '(' ')'
// (PostfixExpression -> PostfixExpression LRound RRound)
IRValuePtr PostfixExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression '(' argument_expression_list ')'
// (PostfixExpression -> PostfixExpression LRound ArgumentExpressionList RRound)
IRValuePtr PostfixExpression4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression '.' IDENTIFIER
// (PostfixExpression -> PostfixExpression Period Identifier)
IRValuePtr PostfixExpression5::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression PTR_OP IDENTIFIER
// (PostfixExpression -> PostfixExpression PtrOp Identifier)
IRValuePtr PostfixExpression6::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression INC_OP
// (PostfixExpression -> PostfixExpression IncOp)
IRValuePtr PostfixExpression7::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression DEC_OP
// (PostfixExpression -> PostfixExpression DecOp)
IRValuePtr PostfixExpression8::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

