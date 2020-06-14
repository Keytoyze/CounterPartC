#include "ast/ast.h"
#include <iostream>

// parameter_list -> parameter_declaration
// (ParameterList -> ParameterDeclaration)
IRValuePtr ParameterList1::GenerateIR(Context &context) {
    this->parameterDeclarationAst1->GenerateIR(context);
    this->parameterList.push_back(parameterDeclarationAst1->parameter);
    return nullptr;
}

// parameter_list -> parameter_list ',' parameter_declaration
// (ParameterList -> ParameterList Comma ParameterDeclaration)
IRValuePtr ParameterList2::GenerateIR(Context &context) {
    this->parameterListAst1->GenerateIR(context);
    // this->commaAst2->GenerateIR(context); not needed ?
    this->parameterDeclarationAst3->GenerateIR(context);
    // a new parameter list is parsed
    this->parameterList.insert(
            parameterList.end(),
            parameterListAst1->parameterList.begin(),
            parameterListAst1->parameterList.end()
    );
    // a new parameter is parsed
    this->parameterList.push_back(parameterDeclarationAst3->parameter);
    return nullptr;
}

