// Generated by buildSrc/GenerateAST.py
#ifndef _STRUCT_OR_UNION_SPECIFIER_H_
#define _STRUCT_OR_UNION_SPECIFIER_H_

//#include "ast/ast.h"
class Identifier;
class LCurly;
class RCurly;
class StructDeclarationList;
class StructOrUnion;

class StructOrUnionSpecifier: public BasicAST {
public:
    virtual ~StructOrUnionSpecifier() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class StructOrUnionSpecifier1: public StructOrUnionSpecifier {
public:
    StructOrUnion* structOrUnionAst1;
    Identifier* identifierAst2;
    LCurly* lCurlyAst3;
    StructDeclarationList* structDeclarationListAst4;
    RCurly* rCurlyAst5;

    StructOrUnionSpecifier1(
        StructOrUnion* structOrUnionAst1,
        Identifier* identifierAst2,
        LCurly* lCurlyAst3,
        StructDeclarationList* structDeclarationListAst4,
        RCurly* rCurlyAst5
    ): structOrUnionAst1(structOrUnionAst1), identifierAst2(identifierAst2), lCurlyAst3(lCurlyAst3), structDeclarationListAst4(structDeclarationListAst4), rCurlyAst5(rCurlyAst5) {}

    virtual ~StructOrUnionSpecifier1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class StructOrUnionSpecifier2: public StructOrUnionSpecifier {
public:
    StructOrUnion* structOrUnionAst1;
    LCurly* lCurlyAst2;
    StructDeclarationList* structDeclarationListAst3;
    RCurly* rCurlyAst4;

    StructOrUnionSpecifier2(
        StructOrUnion* structOrUnionAst1,
        LCurly* lCurlyAst2,
        StructDeclarationList* structDeclarationListAst3,
        RCurly* rCurlyAst4
    ): structOrUnionAst1(structOrUnionAst1), lCurlyAst2(lCurlyAst2), structDeclarationListAst3(structDeclarationListAst3), rCurlyAst4(rCurlyAst4) {}

    virtual ~StructOrUnionSpecifier2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class StructOrUnionSpecifier3: public StructOrUnionSpecifier {
public:
    StructOrUnion* structOrUnionAst1;
    Identifier* identifierAst2;

    StructOrUnionSpecifier3(
        StructOrUnion* structOrUnionAst1,
        Identifier* identifierAst2
    ): structOrUnionAst1(structOrUnionAst1), identifierAst2(identifierAst2) {}

    virtual ~StructOrUnionSpecifier3();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

#endif // _STRUCT_OR_UNION_SPECIFIER_H_
