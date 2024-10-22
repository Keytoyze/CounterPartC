// Generated by buildSrc/GenerateAST.py
#ifndef _IDENTIFIER_LIST_H_
#define _IDENTIFIER_LIST_H_

//#include "ast/ast.h"
class Comma;
class Identifier;

class IdentifierList: public BasicAST {
public:
    virtual ~IdentifierList() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class IdentifierList1: public IdentifierList {
public:
    Identifier* identifierAst1;

    IdentifierList1(
        Identifier* identifierAst1
    ): identifierAst1(identifierAst1) {}

    virtual ~IdentifierList1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class IdentifierList2: public IdentifierList {
public:
    IdentifierList* identifierListAst1;
    Comma* commaAst2;
    Identifier* identifierAst3;

    IdentifierList2(
        IdentifierList* identifierListAst1,
        Comma* commaAst2,
        Identifier* identifierAst3
    ): identifierListAst1(identifierListAst1), commaAst2(commaAst2), identifierAst3(identifierAst3) {}

    virtual ~IdentifierList2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

#endif // _IDENTIFIER_LIST_H_
