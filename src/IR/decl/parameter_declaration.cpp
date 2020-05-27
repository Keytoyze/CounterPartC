#include "ast/ast.h"
#include <iostream>

// parameter_declaration -> declaration_specifiers declarator
// (ParameterDeclaration -> DeclarationSpecifiers Declarator)
IRValuePtr ParameterDeclaration1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ParameterDeclaration Not implemented!" << std::endl;
    return nullptr;
}

// parameter_declaration -> declaration_specifiers abstract_declarator
// (ParameterDeclaration -> DeclarationSpecifiers AbstractDeclarator)
IRValuePtr ParameterDeclaration2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ParameterDeclaration Not implemented!" << std::endl;
    return nullptr;
}

// parameter_declaration -> declaration_specifiers
// (ParameterDeclaration -> DeclarationSpecifiers)
IRValuePtr ParameterDeclaration3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ParameterDeclaration Not implemented!" << std::endl;
    return nullptr;
}

