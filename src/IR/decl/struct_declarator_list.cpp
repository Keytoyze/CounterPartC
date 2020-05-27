#include "ast/ast.h"
#include <iostream>

// struct_declarator_list -> struct_declarator
// (StructDeclaratorList -> StructDeclarator)
IRValuePtr StructDeclaratorList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// struct_declarator_list -> struct_declarator_list ',' struct_declarator
// (StructDeclaratorList -> StructDeclaratorList Comma StructDeclarator)
IRValuePtr StructDeclaratorList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

