// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"
#include "ast/render.h"

void InitDeclarator1::Dump(int depth) {
    TreeRender::push("InitDeclarator");
    declaratorAst1->Dump(depth + 1);
    TreeRender::pop();
}

InitDeclarator1::~InitDeclarator1() {
    delete declaratorAst1;
}

void InitDeclarator2::Dump(int depth) {
    TreeRender::push("InitDeclarator");
    declaratorAst1->Dump(depth + 1);
    eqAst2->Dump(depth + 1);
    initializerAst3->Dump(depth + 1);
    TreeRender::pop();
}

InitDeclarator2::~InitDeclarator2() {
    delete declaratorAst1;
    delete eqAst2;
    delete initializerAst3;
}
