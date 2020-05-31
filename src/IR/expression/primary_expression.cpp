#include "ast/ast.h"
#include <iostream>
#include <string>


// primary_expression -> IDENTIFIER
// (PrimaryExpression -> Identifier)
IRValuePtr PrimaryExpression1::GenerateIR(Context &context) {
    // it might be a function or variable
    auto function = context.findFunction(identifierAst1->content);
    auto var = context.findVar(identifierAst1->content, function != nullptr);
    if (function != nullptr && var != nullptr) {
        context.error("Conflicting function and variable name: " + identifierAst1->content);
    } else if (function != nullptr && var == nullptr) {
        // it's a function identifier
        return function;
    } else if (function == nullptr && var != nullptr) {
        // it's a variable identifier
        return var;
    }
    return nullptr;
}

// primary_expression -> CONSTANT
// (PrimaryExpression -> Constant)
IRValuePtr PrimaryExpression2::GenerateIR(Context &context) {
    IRValuePtr p;
    Type type = Type::TYPE_INT;
    if (dynamic_cast<IntConstant *>(constantAst1)) {
        type = Type::TYPE_INT;
    } else if (dynamic_cast<DoubleConstant *>(constantAst1)) {
        type = Type::TYPE_DOUBLE;
    } else {
        context.error("Unknown type in PrimaryExpression2!!!");
    }
    p = context.newVar(type, false);
    context.ir.constantToValue(p, *constantAst1);
    return p;
}

// primary_expression -> STRING_LITERAL
// (PrimaryExpression -> StringLiteral)
IRValuePtr PrimaryExpression3::GenerateIR(Context &context) {
    std::cerr << "PrimaryExpression3 Not implemented!" << std::endl;
    //return stringLiteralAst1->GenerateIR(context);
    return nullptr;
}

// primary_expression -> '(' expression ')'
// (PrimaryExpression -> LRound Expression RRound)
IRValuePtr PrimaryExpression4::GenerateIR(Context &context) {
    // TODO: implement me!
    //std::cerr << "PrimaryExpression Not implemented!" << std::endl;
    //return nullptr;
    return expressionAst2->GenerateIR(context);
}

