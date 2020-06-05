// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"
#include "ast/render.h"

void Declaration1::Dump(int depth) {
    TreeRender::push("Declaration");
    declarationSpecifiersAst1->Dump(depth + 1);
    simicolonSingleAst2->Dump(depth + 1);
    TreeRender::pop();
}

Declaration1::~Declaration1() {
    delete declarationSpecifiersAst1;
    delete simicolonSingleAst2;
}

void Declaration2::Dump(int depth) {
    TreeRender::push("Declaration");
    declarationSpecifiersAst1->Dump(depth + 1);
    initDeclaratorListAst2->Dump(depth + 1);
    simicolonSingleAst3->Dump(depth + 1);
    TreeRender::pop();
}

Declaration2::~Declaration2() {
    delete declarationSpecifiersAst1;
    delete initDeclaratorListAst2;
    delete simicolonSingleAst3;
}
