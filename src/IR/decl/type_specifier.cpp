#include "ast/ast.h"
#include <iostream>

// type_specifier -> VOID
// (TypeSpecifier -> Void)
IRValuePtr TypeSpecifier1::GenerateIR(Context& context) {
    this->specifierType = Type::TYPE_VOID;
    return nullptr;
}

// type_specifier -> CHAR
// (TypeSpecifier -> Char)
IRValuePtr TypeSpecifier2::GenerateIR(Context& context) {
    this->specifierType = Type::TYPE_CHAR;
    return nullptr;
}

// type_specifier -> SHORT
// (TypeSpecifier -> Short)
IRValuePtr TypeSpecifier3::GenerateIR(Context& context) {
    this->specifierType = Type::TYPE_SHORT;
    return nullptr;
}

// type_specifier -> INT
// (TypeSpecifier -> Int)
IRValuePtr TypeSpecifier4::GenerateIR(Context& context) {
    specifierType = Type::TYPE_INT;
    return nullptr;
}


// type_specifier -> LONG
// (TypeSpecifier -> Long)
IRValuePtr TypeSpecifier5::GenerateIR(Context& context) {
    this->specifierType = Type::TYPE_LONG;
    return nullptr;
}

// type_specifier -> FLOAT
// (TypeSpecifier -> Float)
IRValuePtr TypeSpecifier6::GenerateIR(Context& context) {
    this->specifierType = Type::TYPE_FLOAT;
    return nullptr;
}

// type_specifier -> DOUBLE
// (TypeSpecifier -> Double)
IRValuePtr TypeSpecifier7::GenerateIR(Context& context) {
    this->specifierType = Type::TYPE_DOUBLE;
    return nullptr;
}

// type_specifier -> SIGNED
// (TypeSpecifier -> Signed)
IRValuePtr TypeSpecifier8::GenerateIR(Context& context) {
    this->specifierType = Type::TYPE_SIGNED;
    return nullptr;
}

// type_specifier -> UNSIGNED
// (TypeSpecifier -> Unsigned)
IRValuePtr TypeSpecifier9::GenerateIR(Context& context) {
    this->specifierType = Type::TYPE_UNSIGNED;
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

