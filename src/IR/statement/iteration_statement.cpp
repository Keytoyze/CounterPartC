#include "ast/ast.h"
#include <iostream>

// iteration_statement -> WHILE '(' expression ')' statement
// (IterationStatement -> While LRound Expression RRound Statement)
IRValuePtr IterationStatement1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// iteration_statement -> DO statement WHILE '(' expression ')' ';'
// (IterationStatement -> Do Statement While LRound Expression RRound SimicolonSingle)
IRValuePtr IterationStatement2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// iteration_statement -> FOR '(' expression_statement expression_statement ')' statement
// (IterationStatement -> For LRound ExpressionStatement ExpressionStatement RRound Statement)
IRValuePtr IterationStatement3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// iteration_statement -> FOR '(' expression_statement expression_statement expression ')' statement
// (IterationStatement -> For LRound ExpressionStatement ExpressionStatement Expression RRound Statement)
IRValuePtr IterationStatement4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

