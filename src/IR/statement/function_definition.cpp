#include "ast/ast.h"
#include <iostream>

// function_definition -> declaration_specifiers declarator declaration_list compound_statement
// (FunctionDefinition -> DeclarationSpecifiers Declarator DeclarationList CompoundStatement)
IRValuePtr FunctionDefinition1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "FunctionDefinition Not implemented!" << std::endl;
    return nullptr;
}

// function_definition -> declaration_specifiers declarator compound_statement
// (FunctionDefinition -> DeclarationSpecifiers Declarator CompoundStatement)
IRValuePtr FunctionDefinition2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "FunctionDefinition Not implemented!" << std::endl;
    return nullptr;
}

// function_definition -> declarator declaration_list compound_statement
// (FunctionDefinition -> Declarator DeclarationList CompoundStatement)
IRValuePtr FunctionDefinition3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "FunctionDefinition Not implemented!" << std::endl;
    return nullptr;
}

// function_definition -> declarator compound_statement
// (FunctionDefinition -> Declarator CompoundStatement)
IRValuePtr FunctionDefinition4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "FunctionDefinition Not implemented!" << std::endl;
    return nullptr;
}

