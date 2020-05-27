#include "ast/ast.h"
#include <iostream>

// storage_class_specifier -> TYPEDEF
// (StorageClassSpecifier -> Typedef)
IRValuePtr StorageClassSpecifier1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StorageClassSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// storage_class_specifier -> EXTERN
// (StorageClassSpecifier -> Extern)
IRValuePtr StorageClassSpecifier2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StorageClassSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// storage_class_specifier -> STATIC
// (StorageClassSpecifier -> Static)
IRValuePtr StorageClassSpecifier3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StorageClassSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// storage_class_specifier -> AUTO
// (StorageClassSpecifier -> Auto)
IRValuePtr StorageClassSpecifier4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StorageClassSpecifier Not implemented!" << std::endl;
    return nullptr;
}

// storage_class_specifier -> REGISTER
// (StorageClassSpecifier -> Register)
IRValuePtr StorageClassSpecifier5::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StorageClassSpecifier Not implemented!" << std::endl;
    return nullptr;
}

