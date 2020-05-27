#include "ast/ast.h"
#include <iostream>

// struct_or_union_specifier -> struct_or_union IDENTIFIER '{' struct_declaration_list '}'
// (StructOrUnionSpecifier -> StructOrUnion Identifier LCurly StructDeclarationList RCurly)
IRValuePtr StructOrUnionSpecifier1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StructOrUnionSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// struct_or_union_specifier -> struct_or_union '{' struct_declaration_list '}'
// (StructOrUnionSpecifier -> StructOrUnion LCurly StructDeclarationList RCurly)
IRValuePtr StructOrUnionSpecifier2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StructOrUnionSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// struct_or_union_specifier -> struct_or_union IDENTIFIER
// (StructOrUnionSpecifier -> StructOrUnion Identifier)
IRValuePtr StructOrUnionSpecifier3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StructOrUnionSpecifier Not implemented!" << std::endl;
    return nullptr;
}

