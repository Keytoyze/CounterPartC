// Generated by buildSrc/GenerateAST.py
#ifndef _STRUCT_OR_UNION_SPECIFIER_H_
#define _STRUCT_OR_UNION_SPECIFIER_H_

#include "ast/ast.h"
//#header

class StructOrUnionSpecifier: public BasicAST {
public:
    virtual ~StructOrUnionSpecifier() {}
    virtual void GenerateIR(Context context) {}
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
    virtual void GenerateIR(Context context);
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
    virtual void GenerateIR(Context context);
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
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_RCURLY_
#define _CLASS_RCURLY_
class RCurly;
#endif //_CLASS_RCURLY_
#ifndef _CLASS_IDENTIFIER_
#define _CLASS_IDENTIFIER_
class Identifier;
#endif //_CLASS_IDENTIFIER_
#ifndef _CLASS_STRUCTDECLARATIONLIST_
#define _CLASS_STRUCTDECLARATIONLIST_
class StructDeclarationList;
#endif //_CLASS_STRUCTDECLARATIONLIST_
#ifndef _CLASS_LCURLY_
#define _CLASS_LCURLY_
class LCurly;
#endif //_CLASS_LCURLY_
#ifndef _CLASS_STRUCTORUNION_
#define _CLASS_STRUCTORUNION_
class StructOrUnion;
#endif //_CLASS_STRUCTORUNION_

#endif // _STRUCT_OR_UNION_SPECIFIER_H_
