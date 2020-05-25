// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/decl/enum_specifier.h"

void EnumSpecifier1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "EnumSpecifier1" << std::endl;
    enumAst1->Dump(depth + 1);
    lCurlyAst2->Dump(depth + 1);
    enumeratorListAst3->Dump(depth + 1);
    rCurlyAst4->Dump(depth + 1);
}

EnumSpecifier1::~EnumSpecifier1() {
    delete enumAst1;
    delete lCurlyAst2;
    delete enumeratorListAst3;
    delete rCurlyAst4;
}

void EnumSpecifier2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "EnumSpecifier2" << std::endl;
    enumAst1->Dump(depth + 1);
    identifierAst2->Dump(depth + 1);
    lCurlyAst3->Dump(depth + 1);
    enumeratorListAst4->Dump(depth + 1);
    rCurlyAst5->Dump(depth + 1);
}

EnumSpecifier2::~EnumSpecifier2() {
    delete enumAst1;
    delete identifierAst2;
    delete lCurlyAst3;
    delete enumeratorListAst4;
    delete rCurlyAst5;
}

void EnumSpecifier3::Dump(int depth) {
    std::cout << "[" << depth << "] " << "EnumSpecifier3" << std::endl;
    enumAst1->Dump(depth + 1);
    identifierAst2->Dump(depth + 1);
}

EnumSpecifier3::~EnumSpecifier3() {
    delete enumAst1;
    delete identifierAst2;
}
