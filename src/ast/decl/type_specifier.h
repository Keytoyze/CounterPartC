// Generated by buildSrc/GenerateAST.py
#ifndef _TYPE_SPECIFIER_H_
#define _TYPE_SPECIFIER_H_

//#include "ast/ast.h"
class Char;
class Double;
class EnumSpecifier;
class Float;
class Int;
class Long;
class Short;
class Signed;
class StructOrUnionSpecifier;
class TypeNameToken;
class Unsigned;
class Void;

class TypeSpecifier: public BasicAST {
public:
    Type specifierType;
    virtual ~TypeSpecifier() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class TypeSpecifier1: public TypeSpecifier {
public:
    Void* voidAst1;

    TypeSpecifier1(
        Void* voidAst1
    ): voidAst1(voidAst1) {}

    virtual ~TypeSpecifier1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeSpecifier2: public TypeSpecifier {
public:
    Char* charAst1;

    TypeSpecifier2(
        Char* charAst1
    ): charAst1(charAst1) {}

    virtual ~TypeSpecifier2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeSpecifier3: public TypeSpecifier {
public:
    Short* shortAst1;

    TypeSpecifier3(
        Short* shortAst1
    ): shortAst1(shortAst1) {}

    virtual ~TypeSpecifier3();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeSpecifier4: public TypeSpecifier {
public:
    Int* intAst1;

    TypeSpecifier4(
        Int* intAst1
    ): intAst1(intAst1) {}

    virtual ~TypeSpecifier4();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeSpecifier5: public TypeSpecifier {
public:
    Long* longAst1;

    TypeSpecifier5(
        Long* longAst1
    ): longAst1(longAst1) {}

    virtual ~TypeSpecifier5();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeSpecifier6: public TypeSpecifier {
public:
    Float* floatAst1;

    TypeSpecifier6(
        Float* floatAst1
    ): floatAst1(floatAst1) {}

    virtual ~TypeSpecifier6();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeSpecifier7: public TypeSpecifier {
public:
    Double* doubleAst1;

    TypeSpecifier7(
        Double* doubleAst1
    ): doubleAst1(doubleAst1) {}

    virtual ~TypeSpecifier7();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeSpecifier8: public TypeSpecifier {
public:
    Signed* signedAst1;

    TypeSpecifier8(
        Signed* signedAst1
    ): signedAst1(signedAst1) {}

    virtual ~TypeSpecifier8();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeSpecifier9: public TypeSpecifier {
public:
    Unsigned* unsignedAst1;

    TypeSpecifier9(
        Unsigned* unsignedAst1
    ): unsignedAst1(unsignedAst1) {}

    virtual ~TypeSpecifier9();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeSpecifier10: public TypeSpecifier {
public:
    StructOrUnionSpecifier* structOrUnionSpecifierAst1;

    TypeSpecifier10(
        StructOrUnionSpecifier* structOrUnionSpecifierAst1
    ): structOrUnionSpecifierAst1(structOrUnionSpecifierAst1) {}

    virtual ~TypeSpecifier10();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeSpecifier11: public TypeSpecifier {
public:
    EnumSpecifier* enumSpecifierAst1;

    TypeSpecifier11(
        EnumSpecifier* enumSpecifierAst1
    ): enumSpecifierAst1(enumSpecifierAst1) {}

    virtual ~TypeSpecifier11();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeSpecifier12: public TypeSpecifier {
public:
    TypeNameToken* typeNameTokenAst1;

    TypeSpecifier12(
        TypeNameToken* typeNameTokenAst1
    ): typeNameTokenAst1(typeNameTokenAst1) {}

    virtual ~TypeSpecifier12();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

#endif // _TYPE_SPECIFIER_H_
