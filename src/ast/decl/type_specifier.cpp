// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/decl/type_specifier.h"

void TypeSpecifier1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier1" << std::endl;
    voidAst1->Dump(depth + 1);
}

TypeSpecifier1::~TypeSpecifier1() {
    delete voidAst1;
}

void TypeSpecifier2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier2" << std::endl;
    charAst1->Dump(depth + 1);
}

TypeSpecifier2::~TypeSpecifier2() {
    delete charAst1;
}

void TypeSpecifier3::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier3" << std::endl;
    shortAst1->Dump(depth + 1);
}

TypeSpecifier3::~TypeSpecifier3() {
    delete shortAst1;
}

void TypeSpecifier4::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier4" << std::endl;
    intAst1->Dump(depth + 1);
}

TypeSpecifier4::~TypeSpecifier4() {
    delete intAst1;
}

void TypeSpecifier5::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier5" << std::endl;
    longAst1->Dump(depth + 1);
}

TypeSpecifier5::~TypeSpecifier5() {
    delete longAst1;
}

void TypeSpecifier6::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier6" << std::endl;
    floatAst1->Dump(depth + 1);
}

TypeSpecifier6::~TypeSpecifier6() {
    delete floatAst1;
}

void TypeSpecifier7::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier7" << std::endl;
    doubleAst1->Dump(depth + 1);
}

TypeSpecifier7::~TypeSpecifier7() {
    delete doubleAst1;
}

void TypeSpecifier8::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier8" << std::endl;
    signedAst1->Dump(depth + 1);
}

TypeSpecifier8::~TypeSpecifier8() {
    delete signedAst1;
}

void TypeSpecifier9::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier9" << std::endl;
    unsignedAst1->Dump(depth + 1);
}

TypeSpecifier9::~TypeSpecifier9() {
    delete unsignedAst1;
}

void TypeSpecifier10::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier10" << std::endl;
    structOrUnionSpecifierAst1->Dump(depth + 1);
}

TypeSpecifier10::~TypeSpecifier10() {
    delete structOrUnionSpecifierAst1;
}

void TypeSpecifier11::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier11" << std::endl;
    enumSpecifierAst1->Dump(depth + 1);
}

TypeSpecifier11::~TypeSpecifier11() {
    delete enumSpecifierAst1;
}

void TypeSpecifier12::Dump(int depth) {
    std::cout << "[" << depth << "] " << "TypeSpecifier12" << std::endl;
    typeNameTokenAst1->Dump(depth + 1);
}

TypeSpecifier12::~TypeSpecifier12() {
    delete typeNameTokenAst1;
}