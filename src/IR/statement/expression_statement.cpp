#include "ast/ast.h"
#include <iostream>

// expression_statement -> ';'
// (ExpressionStatement -> SimicolonSingle)
IRValuePtr ExpressionStatement1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ExpressionStatement Not implemented!" << std::endl;
    return nullptr;
}

// expression_statement -> expression ';'
// (ExpressionStatement -> Expression SimicolonSingle)
IRValuePtr ExpressionStatement2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ExpressionStatement Not implemented!" << std::endl;
    return nullptr;
}

