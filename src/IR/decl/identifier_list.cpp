#include "ast/ast.h"
#include <iostream>

// identifier_list -> IDENTIFIER
// (IdentifierList -> Identifier)
IRValuePtr IdentifierList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// identifier_list -> identifier_list ',' IDENTIFIER
// (IdentifierList -> IdentifierList Comma Identifier)
IRValuePtr IdentifierList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

