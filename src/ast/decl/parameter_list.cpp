// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"

void ParameterList1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "ParameterList1" << std::endl;
    parameterDeclarationAst1->Dump(depth + 1);
}

ParameterList1::~ParameterList1() {
    delete parameterDeclarationAst1;
}

void ParameterList2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "ParameterList2" << std::endl;
    parameterListAst1->Dump(depth + 1);
    commaAst2->Dump(depth + 1);
    parameterDeclarationAst3->Dump(depth + 1);
}

ParameterList2::~ParameterList2() {
    delete parameterListAst1;
    delete commaAst2;
    delete parameterDeclarationAst3;
}
