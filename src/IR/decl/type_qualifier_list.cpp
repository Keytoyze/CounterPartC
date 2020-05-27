#include "ast/ast.h"
#include <iostream>

// type_qualifier_list -> type_qualifier
// (TypeQualifierList -> TypeQualifier)
IRValuePtr TypeQualifierList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// type_qualifier_list -> type_qualifier_list type_qualifier
// (TypeQualifierList -> TypeQualifierList TypeQualifier)
IRValuePtr TypeQualifierList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

