#include "ast/ast.h"
#include <iostream>

// specifier_qualifier_list -> type_specifier specifier_qualifier_list
// (SpecifierQualifierList -> TypeSpecifier SpecifierQualifierList)
IRValuePtr SpecifierQualifierList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "SpecifierQualifierList Not implemented!" << std::endl;
    return nullptr;
}

// specifier_qualifier_list -> type_specifier
// (SpecifierQualifierList -> TypeSpecifier)
IRValuePtr SpecifierQualifierList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "SpecifierQualifierList Not implemented!" << std::endl;
    return nullptr;
}

// specifier_qualifier_list -> type_qualifier specifier_qualifier_list
// (SpecifierQualifierList -> TypeQualifier SpecifierQualifierList)
IRValuePtr SpecifierQualifierList3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "SpecifierQualifierList Not implemented!" << std::endl;
    return nullptr;
}

// specifier_qualifier_list -> type_qualifier
// (SpecifierQualifierList -> TypeQualifier)
IRValuePtr SpecifierQualifierList4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "SpecifierQualifierList Not implemented!" << std::endl;
    return nullptr;
}

