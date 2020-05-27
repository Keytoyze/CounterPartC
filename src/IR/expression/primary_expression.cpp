#include "ast/ast.h"
#include <iostream>

// primary_expression -> IDENTIFIER
// (PrimaryExpression -> Identifier)
IRValuePtr PrimaryExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "PrimaryExpression Not implemented!" << std::endl;
    return nullptr;
}

// primary_expression -> CONSTANT
// (PrimaryExpression -> Constant)
IRValuePtr PrimaryExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "PrimaryExpression Not implemented!" << std::endl;
    return nullptr;
}

// primary_expression -> STRING_LITERAL
// (PrimaryExpression -> StringLiteral)
IRValuePtr PrimaryExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "PrimaryExpression Not implemented!" << std::endl;
    return nullptr;
}

// primary_expression -> '(' expression ')'
// (PrimaryExpression -> LRound Expression RRound)
IRValuePtr PrimaryExpression4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "PrimaryExpression Not implemented!" << std::endl;
    return nullptr;
}

