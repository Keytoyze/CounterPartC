// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"

void StructDeclaration1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "StructDeclaration1" << std::endl;
    specifierQualifierListAst1->Dump(depth + 1);
    structDeclaratorListAst2->Dump(depth + 1);
    simicolonSingleAst3->Dump(depth + 1);
}

StructDeclaration1::~StructDeclaration1() {
    delete specifierQualifierListAst1;
    delete structDeclaratorListAst2;
    delete simicolonSingleAst3;
}
