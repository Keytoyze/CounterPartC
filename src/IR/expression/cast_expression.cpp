#include "ast/ast.h"
#include <iostream>

// cast_expression -> unary_expression
// (CastExpression -> UnaryExpression)
IRValuePtr CastExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "CastExpression Not implemented!" << std::endl;
    //return nullptr;
    return unaryExpressionAst1->GenerateIR(context);
}

// cast_expression -> '(' type_name ')' cast_expression
// (CastExpression -> LRound TypeName RRound CastExpression)
IRValuePtr CastExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "CastExpression Not implemented!" << std::endl;
    return nullptr;

}

//缺少typename 大类