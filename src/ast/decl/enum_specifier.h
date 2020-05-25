// Generated by buildSrc/GenerateAST.py
#ifndef _ENUM_SPECIFIER_H_
#define _ENUM_SPECIFIER_H_

#include "ast/ast.h"
//#header

class EnumSpecifier: public BasicAST {
public:
    virtual ~EnumSpecifier() {}
    virtual void GenerateIR(Context& context) {}
    virtual void Dump(int depth) {}
};

class EnumSpecifier1: public EnumSpecifier {
public:
    Enum* enumAst1;
    LCurly* lCurlyAst2;
    EnumeratorList* enumeratorListAst3;
    RCurly* rCurlyAst4;

    EnumSpecifier1(
        Enum* enumAst1,
        LCurly* lCurlyAst2,
        EnumeratorList* enumeratorListAst3,
        RCurly* rCurlyAst4
    ): enumAst1(enumAst1), lCurlyAst2(lCurlyAst2), enumeratorListAst3(enumeratorListAst3), rCurlyAst4(rCurlyAst4) {}

    virtual ~EnumSpecifier1();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class EnumSpecifier2: public EnumSpecifier {
public:
    Enum* enumAst1;
    Identifier* identifierAst2;
    LCurly* lCurlyAst3;
    EnumeratorList* enumeratorListAst4;
    RCurly* rCurlyAst5;

    EnumSpecifier2(
        Enum* enumAst1,
        Identifier* identifierAst2,
        LCurly* lCurlyAst3,
        EnumeratorList* enumeratorListAst4,
        RCurly* rCurlyAst5
    ): enumAst1(enumAst1), identifierAst2(identifierAst2), lCurlyAst3(lCurlyAst3), enumeratorListAst4(enumeratorListAst4), rCurlyAst5(rCurlyAst5) {}

    virtual ~EnumSpecifier2();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class EnumSpecifier3: public EnumSpecifier {
public:
    Enum* enumAst1;
    Identifier* identifierAst2;

    EnumSpecifier3(
        Enum* enumAst1,
        Identifier* identifierAst2
    ): enumAst1(enumAst1), identifierAst2(identifierAst2) {}

    virtual ~EnumSpecifier3();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_IDENTIFIER_
#define _CLASS_IDENTIFIER_
class Identifier;
#endif //_CLASS_IDENTIFIER_
#ifndef _CLASS_LCURLY_
#define _CLASS_LCURLY_
class LCurly;
#endif //_CLASS_LCURLY_
#ifndef _CLASS_ENUM_
#define _CLASS_ENUM_
class Enum;
#endif //_CLASS_ENUM_
#ifndef _CLASS_ENUMERATORLIST_
#define _CLASS_ENUMERATORLIST_
class EnumeratorList;
#endif //_CLASS_ENUMERATORLIST_
#ifndef _CLASS_RCURLY_
#define _CLASS_RCURLY_
class RCurly;
#endif //_CLASS_RCURLY_

#endif // _ENUM_SPECIFIER_H_
