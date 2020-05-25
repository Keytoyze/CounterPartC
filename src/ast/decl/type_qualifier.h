// Generated by buildSrc/GenerateAST.py
#ifndef _TYPE_QUALIFIER_H_
#define _TYPE_QUALIFIER_H_

#include "ast/ast.h"
//#header

class TypeQualifier: public BasicAST {
public:
    virtual ~TypeQualifier() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class TypeQualifier1: public TypeQualifier {
public:
    Const* constAst1;

    TypeQualifier1(
        Const* constAst1
    ): constAst1(constAst1) {}

    virtual ~TypeQualifier1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class TypeQualifier2: public TypeQualifier {
public:
    Volatile* volatileAst1;

    TypeQualifier2(
        Volatile* volatileAst1
    ): volatileAst1(volatileAst1) {}

    virtual ~TypeQualifier2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_VOLATILE_
#define _CLASS_VOLATILE_
class Volatile;
#endif //_CLASS_VOLATILE_
#ifndef _CLASS_CONST_
#define _CLASS_CONST_
class Const;
#endif //_CLASS_CONST_

#endif // _TYPE_QUALIFIER_H_
