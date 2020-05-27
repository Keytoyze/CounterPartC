#include "ast/ast.h"
#include <iostream>

// struct_declaration -> specifier_qualifier_list struct_declarator_list ';'
// (StructDeclaration -> SpecifierQualifierList StructDeclaratorList SimicolonSingle)
IRValuePtr StructDeclaration1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StructDeclaration Not implemented!" << std::endl;
    return nullptr;
}

