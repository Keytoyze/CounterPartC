#include "ast/ast.h"
#include <iostream>

// type_specifier -> VOID
// (TypeSpecifier -> Void)
IRValuePtr TypeSpecifier1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TypeSpecifier void Not implemented!" << std::endl;
    return nullptr;
}

// type_specifier -> CHAR
// (TypeSpecifier -> Char)
IRValuePtr TypeSpecifier2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TypeSpecifier char Not implemented!" << std::endl;
    return nullptr;
}

// type_specifier -> SHORT
// (TypeSpecifier -> Short)
IRValuePtr TypeSpecifier3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TypeSpecifier short Not implemented!" << std::endl;
    return nullptr;
}

// type_specifier -> INT
// (TypeSpecifier -> Int)
IRValuePtr TypeSpecifier4::GenerateIR(Context& context) {
//    std::cerr << "TypeSpecifier int Not implemented!" << std::endl;
    return context.newVar(Type::TYPE_INT, false);
}

// type_specifier -> LONG
// (TypeSpecifier -> Long)
IRValuePtr TypeSpecifier5::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TypeSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// type_specifier -> FLOAT
// (TypeSpecifier -> Float)
IRValuePtr TypeSpecifier6::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TypeSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// type_specifier -> DOUBLE
// (TypeSpecifier -> Double)
IRValuePtr TypeSpecifier7::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TypeSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// type_specifier -> SIGNED
// (TypeSpecifier -> Signed)
IRValuePtr TypeSpecifier8::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TypeSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// type_specifier -> UNSIGNED
// (TypeSpecifier -> Unsigned)
IRValuePtr TypeSpecifier9::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TypeSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// type_specifier -> struct_or_union_specifier
// (TypeSpecifier -> StructOrUnionSpecifier)
IRValuePtr TypeSpecifier10::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TypeSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// type_specifier -> enum_specifier
// (TypeSpecifier -> EnumSpecifier)
IRValuePtr TypeSpecifier11::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TypeSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// type_specifier -> TYPE_NAME_TOKEN
// (TypeSpecifier -> TypeNameToken)
IRValuePtr TypeSpecifier12::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TypeSpecifier Not implemented!" << std::endl;
    return nullptr;
}

