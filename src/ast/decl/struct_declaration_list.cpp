// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/decl/struct_declaration_list.h"

void StructDeclarationList1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "StructDeclarationList1" << std::endl;
    structDeclarationAst1->Dump(depth + 1);
}

StructDeclarationList1::~StructDeclarationList1() {
    delete structDeclarationAst1;
}

void StructDeclarationList2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "StructDeclarationList2" << std::endl;
    structDeclarationListAst1->Dump(depth + 1);
    structDeclarationAst2->Dump(depth + 1);
}

StructDeclarationList2::~StructDeclarationList2() {
    delete structDeclarationListAst1;
    delete structDeclarationAst2;
}
