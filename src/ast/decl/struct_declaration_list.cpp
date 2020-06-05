// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"
#include "ast/render.h"

void StructDeclarationList1::Dump(int depth) {
    TreeRender::push("StructDeclarationList");
    structDeclarationAst1->Dump(depth + 1);
    TreeRender::pop();
}

StructDeclarationList1::~StructDeclarationList1() {
    delete structDeclarationAst1;
}

void StructDeclarationList2::Dump(int depth) {
    TreeRender::push("StructDeclarationList");
    structDeclarationListAst1->Dump(depth + 1);
    structDeclarationAst2->Dump(depth + 1);
    TreeRender::pop();
}

StructDeclarationList2::~StructDeclarationList2() {
    delete structDeclarationListAst1;
    delete structDeclarationAst2;
}
