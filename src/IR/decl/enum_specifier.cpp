#include "ast/ast.h"
#include <iostream>

// enum_specifier -> ENUM '{' enumerator_list '}'
// (EnumSpecifier -> Enum LCurly EnumeratorList RCurly)
IRValuePtr EnumSpecifier1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "EnumSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// enum_specifier -> ENUM IDENTIFIER '{' enumerator_list '}'
// (EnumSpecifier -> Enum Identifier LCurly EnumeratorList RCurly)
IRValuePtr EnumSpecifier2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "EnumSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// enum_specifier -> ENUM IDENTIFIER
// (EnumSpecifier -> Enum Identifier)
IRValuePtr EnumSpecifier3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "EnumSpecifier Not implemented!" << std::endl;
    return nullptr;
}

