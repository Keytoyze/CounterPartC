#include "ast/ast.h"
#include <iostream>

// statement -> labeled_statement
// (Statement -> LabeledStatement)
IRValuePtr Statement1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Statement Not implemented!" << std::endl;
    return nullptr;
}

// statement -> compound_statement
// (Statement -> CompoundStatement)
IRValuePtr Statement2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Statement Not implemented!" << std::endl;
    return nullptr;
}

// statement -> expression_statement
// (Statement -> ExpressionStatement)
IRValuePtr Statement3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Statement Not implemented!" << std::endl;
    return nullptr;
}

// statement -> selection_statement
// (Statement -> SelectionStatement)
IRValuePtr Statement4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Statement Not implemented!" << std::endl;
    return nullptr;
}

// statement -> iteration_statement
// (Statement -> IterationStatement)
IRValuePtr Statement5::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Statement Not implemented!" << std::endl;
    return nullptr;
}

// statement -> jump_statement
// (Statement -> JumpStatement)
IRValuePtr Statement6::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Statement Not implemented!" << std::endl;
    return nullptr;
}

