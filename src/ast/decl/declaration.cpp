// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/decl/declaration.h"

void Declaration1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "Declaration1" << std::endl;
    declarationSpecifiersAst1->Dump(depth + 1);
    simicolonSingleAst2->Dump(depth + 1);
}

Declaration1::~Declaration1() {
    delete declarationSpecifiersAst1;
    delete simicolonSingleAst2;
}

void Declaration2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "Declaration2" << std::endl;
    declarationSpecifiersAst1->Dump(depth + 1);
    initDeclaratorListAst2->Dump(depth + 1);
    simicolonSingleAst3->Dump(depth + 1);
}

Declaration2::~Declaration2() {
    delete declarationSpecifiersAst1;
    delete initDeclaratorListAst2;
    delete simicolonSingleAst3;
}
