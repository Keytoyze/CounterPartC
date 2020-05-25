// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/decl/struct_or_union.h"

void StructOrUnion1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "StructOrUnion1" << std::endl;
    structAst1->Dump(depth + 1);
}

StructOrUnion1::~StructOrUnion1() {
    delete structAst1;
}

void StructOrUnion2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "StructOrUnion2" << std::endl;
    unionAst1->Dump(depth + 1);
}

StructOrUnion2::~StructOrUnion2() {
    delete unionAst1;
}
