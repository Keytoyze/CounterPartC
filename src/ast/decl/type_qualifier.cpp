// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"
#include "ast/render.h"

void TypeQualifier1::Dump(int depth) {
    TreeRender::push("TypeQualifier");
    constAst1->Dump(depth + 1);
    TreeRender::pop();
}

TypeQualifier1::~TypeQualifier1() {
    delete constAst1;
}

void TypeQualifier2::Dump(int depth) {
    TreeRender::push("TypeQualifier");
    volatileAst1->Dump(depth + 1);
    TreeRender::pop();
}

TypeQualifier2::~TypeQualifier2() {
    delete volatileAst1;
}
