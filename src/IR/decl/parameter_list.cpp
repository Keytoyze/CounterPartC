#include "ast/ast.h"
#include <iostream>

// parameter_list -> parameter_declaration
// (ParameterList -> ParameterDeclaration)
IRValuePtr ParameterList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ParameterList Not implemented!" << std::endl;
    return nullptr;
}

// parameter_list -> parameter_list ',' parameter_declaration
// (ParameterList -> ParameterList Comma ParameterDeclaration)
IRValuePtr ParameterList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ParameterList Not implemented!" << std::endl;
    return nullptr;
}

