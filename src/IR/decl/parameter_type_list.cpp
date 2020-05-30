#include "ast/ast.h"
#include <iostream>

// parameter_type_list -> parameter_list
// (ParameterTypeList -> ParameterList)
IRValuePtr ParameterTypeList1::GenerateIR(Context& context) {
    // TODO: implement me!
    this->parameterListAst1->GenerateIR(context);
    this->parameterList = parameterListAst1->parameterList;
    return nullptr;
}

// parameter_type_list -> parameter_list ',' ELLIPSIS
// (ParameterTypeList -> ParameterList Comma Ellipsis)
IRValuePtr ParameterTypeList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "ParameterTypeList Not implemented!" << std::endl;
    return nullptr;
}

