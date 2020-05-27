#include "ast/ast.h"
#include <iostream>

// struct_declaration_list -> struct_declaration
// (StructDeclarationList -> StructDeclaration)
IRValuePtr StructDeclarationList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StructDeclarationList Not implemented!" << std::endl;
    return nullptr;
}

// struct_declaration_list -> struct_declaration_list struct_declaration
// (StructDeclarationList -> StructDeclarationList StructDeclaration)
IRValuePtr StructDeclarationList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StructDeclarationList Not implemented!" << std::endl;
    return nullptr;
}

