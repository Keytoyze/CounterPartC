// Generated by buildSrc/GenerateAST.py
#ifndef _DECLARATION_LIST_H_
#define _DECLARATION_LIST_H_

#include "ast/ast.h"
//#header

class DeclarationList: public BasicAST {
public:
    virtual ~DeclarationList() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class DeclarationList1: public DeclarationList {
public:
    Declaration* declarationAst1;

    DeclarationList1(
        Declaration* declarationAst1
    ): declarationAst1(declarationAst1) {}

    virtual ~DeclarationList1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class DeclarationList2: public DeclarationList {
public:
    DeclarationList* declarationListAst1;
    Declaration* declarationAst2;

    DeclarationList2(
        DeclarationList* declarationListAst1,
        Declaration* declarationAst2
    ): declarationListAst1(declarationListAst1), declarationAst2(declarationAst2) {}

    virtual ~DeclarationList2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_DECLARATION_
#define _CLASS_DECLARATION_
class Declaration;
#endif //_CLASS_DECLARATION_

#endif // _DECLARATION_LIST_H_
