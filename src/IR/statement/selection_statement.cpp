#include "ast/ast.h"
#include <iostream>

// selection_statement -> IF '(' expression ')' statement
// (SelectionStatement -> If LRound Expression RRound Statement)
IRValuePtr SelectionStatement1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// selection_statement -> IF '(' expression ')' statement ELSE statement
// (SelectionStatement -> If LRound Expression RRound Statement Else Statement)
IRValuePtr SelectionStatement2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// selection_statement -> SWITCH '(' expression ')' statement
// (SelectionStatement -> Switch LRound Expression RRound Statement)
IRValuePtr SelectionStatement3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

