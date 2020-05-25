// Generated by buildSrc/GenerateAST.py
#ifndef _STRUCT_DECLARATOR_H_
#define _STRUCT_DECLARATOR_H_

#include "ast/ast.h"
//#header

class StructDeclarator: public BasicAST {
public:
    virtual ~StructDeclarator() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class StructDeclarator1: public StructDeclarator {
public:
    Declarator* declaratorAst1;

    StructDeclarator1(
        Declarator* declaratorAst1
    ): declaratorAst1(declaratorAst1) {}

    virtual ~StructDeclarator1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class StructDeclarator2: public StructDeclarator {
public:
    Colon* colonAst1;
    ConstantExpression* constantExpressionAst2;

    StructDeclarator2(
        Colon* colonAst1,
        ConstantExpression* constantExpressionAst2
    ): colonAst1(colonAst1), constantExpressionAst2(constantExpressionAst2) {}

    virtual ~StructDeclarator2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class StructDeclarator3: public StructDeclarator {
public:
    Declarator* declaratorAst1;
    Colon* colonAst2;
    ConstantExpression* constantExpressionAst3;

    StructDeclarator3(
        Declarator* declaratorAst1,
        Colon* colonAst2,
        ConstantExpression* constantExpressionAst3
    ): declaratorAst1(declaratorAst1), colonAst2(colonAst2), constantExpressionAst3(constantExpressionAst3) {}

    virtual ~StructDeclarator3();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_COLON_
#define _CLASS_COLON_
class Colon;
#endif //_CLASS_COLON_
#ifndef _CLASS_CONSTANTEXPRESSION_
#define _CLASS_CONSTANTEXPRESSION_
class ConstantExpression;
#endif //_CLASS_CONSTANTEXPRESSION_
#ifndef _CLASS_DECLARATOR_
#define _CLASS_DECLARATOR_
class Declarator;
#endif //_CLASS_DECLARATOR_

#endif // _STRUCT_DECLARATOR_H_
