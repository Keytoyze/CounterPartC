// Generated by buildSrc/GenerateAST.py
#ifndef _TYPE_NAME_H_
#define _TYPE_NAME_H_

#include "ast/ast.h"
//#header

class TypeName: public BasicAST {
public:
    virtual ~TypeName() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class TypeName1: public TypeName {
public:
    SpecifierQualifierList* specifierQualifierListAst1;

    TypeName1(
        SpecifierQualifierList* specifierQualifierListAst1
    ): specifierQualifierListAst1(specifierQualifierListAst1) {}

    virtual ~TypeName1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeName2: public TypeName {
public:
    SpecifierQualifierList* specifierQualifierListAst1;
    AbstractDeclarator* abstractDeclaratorAst2;

    TypeName2(
        SpecifierQualifierList* specifierQualifierListAst1,
        AbstractDeclarator* abstractDeclaratorAst2
    ): specifierQualifierListAst1(specifierQualifierListAst1), abstractDeclaratorAst2(abstractDeclaratorAst2) {}

    virtual ~TypeName2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_SPECIFIERQUALIFIERLIST_
#define _CLASS_SPECIFIERQUALIFIERLIST_
class SpecifierQualifierList;
#endif //_CLASS_SPECIFIERQUALIFIERLIST_
#ifndef _CLASS_ABSTRACTDECLARATOR_
#define _CLASS_ABSTRACTDECLARATOR_
class AbstractDeclarator;
#endif //_CLASS_ABSTRACTDECLARATOR_

#endif // _TYPE_NAME_H_
