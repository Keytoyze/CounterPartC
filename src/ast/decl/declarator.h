// Generated by buildSrc/GenerateAST.py
#ifndef _DECLARATOR_H_
#define _DECLARATOR_H_

//#include "ast/ast.h"
class DirectDeclarator;
class Pointer;

class Declarator: public BasicAST {
public:
    virtual ~Declarator() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class Declarator1: public Declarator {
public:
    Pointer* pointerAst1;
    DirectDeclarator* directDeclaratorAst2;

    Declarator1(
        Pointer* pointerAst1,
        DirectDeclarator* directDeclaratorAst2
    ): pointerAst1(pointerAst1), directDeclaratorAst2(directDeclaratorAst2) {}

    virtual ~Declarator1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class Declarator2: public Declarator {
public:
    DirectDeclarator* directDeclaratorAst1;

    Declarator2(
        DirectDeclarator* directDeclaratorAst1
    ): directDeclaratorAst1(directDeclaratorAst1) {}

    virtual ~Declarator2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

#endif // _DECLARATOR_H_
