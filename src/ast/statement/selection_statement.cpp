// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"

void SelectionStatement1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "SelectionStatement1" << std::endl;
    ifAst1->Dump(depth + 1);
    lRoundAst2->Dump(depth + 1);
    expressionAst3->Dump(depth + 1);
    rRoundAst4->Dump(depth + 1);
    statementAst5->Dump(depth + 1);
}

SelectionStatement1::~SelectionStatement1() {
    delete ifAst1;
    delete lRoundAst2;
    delete expressionAst3;
    delete rRoundAst4;
    delete statementAst5;
}

void SelectionStatement2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "SelectionStatement2" << std::endl;
    ifAst1->Dump(depth + 1);
    lRoundAst2->Dump(depth + 1);
    expressionAst3->Dump(depth + 1);
    rRoundAst4->Dump(depth + 1);
    statementAst5->Dump(depth + 1);
    elseAst6->Dump(depth + 1);
    statementAst7->Dump(depth + 1);
}

SelectionStatement2::~SelectionStatement2() {
    delete ifAst1;
    delete lRoundAst2;
    delete expressionAst3;
    delete rRoundAst4;
    delete statementAst5;
    delete elseAst6;
    delete statementAst7;
}

void SelectionStatement3::Dump(int depth) {
    std::cout << "[" << depth << "] " << "SelectionStatement3" << std::endl;
    switchAst1->Dump(depth + 1);
    lRoundAst2->Dump(depth + 1);
    expressionAst3->Dump(depth + 1);
    rRoundAst4->Dump(depth + 1);
    statementAst5->Dump(depth + 1);
}

SelectionStatement3::~SelectionStatement3() {
    delete switchAst1;
    delete lRoundAst2;
    delete expressionAst3;
    delete rRoundAst4;
    delete statementAst5;
}
