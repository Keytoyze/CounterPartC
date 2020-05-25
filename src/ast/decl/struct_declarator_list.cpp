// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/decl/struct_declarator_list.h"

void StructDeclaratorList1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "StructDeclaratorList1" << std::endl;
    structDeclaratorAst1->Dump(depth + 1);
}

StructDeclaratorList1::~StructDeclaratorList1() {
    delete structDeclaratorAst1;
}

void StructDeclaratorList2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "StructDeclaratorList2" << std::endl;
    structDeclaratorListAst1->Dump(depth + 1);
    commaAst2->Dump(depth + 1);
    structDeclaratorAst3->Dump(depth + 1);
}

StructDeclaratorList2::~StructDeclaratorList2() {
    delete structDeclaratorListAst1;
    delete commaAst2;
    delete structDeclaratorAst3;
}
