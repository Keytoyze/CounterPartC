#include "ast/ast.h"
#include <iostream>

// declaration_specifiers -> storage_class_specifier
// (DeclarationSpecifiers -> StorageClassSpecifier)
IRValuePtr DeclarationSpecifiers1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DeclarationSpecifiers1 Not implemented!" << std::endl;
    return nullptr;
}

// declaration_specifiers -> storage_class_specifier declaration_specifiers
// (DeclarationSpecifiers -> StorageClassSpecifier DeclarationSpecifiers)
IRValuePtr DeclarationSpecifiers2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DeclarationSpecifiers2 Not implemented!" << std::endl;
    return nullptr;
}

// declaration_specifiers -> type_specifier
// (DeclarationSpecifiers -> TypeSpecifier)
IRValuePtr DeclarationSpecifiers3::GenerateIR(Context& context) {
    // TODO: implement me!
    this->typeSpecifierAst1->GenerateIR(context);
    std::cerr << "DeclarationSpecifiers3 Not implemented!" << std::endl;
    return nullptr;
}

// declaration_specifiers -> type_specifier declaration_specifiers
// (DeclarationSpecifiers -> TypeSpecifier DeclarationSpecifiers)
IRValuePtr DeclarationSpecifiers4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DeclarationSpecifiers Not implemented!" << std::endl;
    return nullptr;
}

// declaration_specifiers -> type_qualifier
// (DeclarationSpecifiers -> TypeQualifier)
IRValuePtr DeclarationSpecifiers5::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DeclarationSpecifiers Not implemented!" << std::endl;
    return nullptr;
}

// declaration_specifiers -> type_qualifier declaration_specifiers
// (DeclarationSpecifiers -> TypeQualifier DeclarationSpecifiers)
IRValuePtr DeclarationSpecifiers6::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DeclarationSpecifiers Not implemented!" << std::endl;
    return nullptr;
}

