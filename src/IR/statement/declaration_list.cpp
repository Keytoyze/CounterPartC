#include "ast/ast.h"
#include <iostream>

// declaration_list -> declaration
// (DeclarationList -> Declaration)
IRValuePtr DeclarationList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DeclarationList Not implemented!" << std::endl;
    return nullptr;
}

// declaration_list -> declaration_list declaration
// (DeclarationList -> DeclarationList Declaration)
IRValuePtr DeclarationList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DeclarationList Not implemented!" << std::endl;
    return nullptr;
}

