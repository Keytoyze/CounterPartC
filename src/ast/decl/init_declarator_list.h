// Generated by buildSrc/GenerateAST.py
#ifndef _INIT_DECLARATOR_LIST_H_
#define _INIT_DECLARATOR_LIST_H_

#include "ast/ast.h"
//#header

class InitDeclaratorList: public BasicAST {
public:
    virtual ~InitDeclaratorList() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class InitDeclaratorList1: public InitDeclaratorList {
public:
    InitDeclarator* initDeclaratorAst1;

    InitDeclaratorList1(
        InitDeclarator* initDeclaratorAst1
    ): initDeclaratorAst1(initDeclaratorAst1) {}

    virtual ~InitDeclaratorList1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class InitDeclaratorList2: public InitDeclaratorList {
public:
    InitDeclaratorList* initDeclaratorListAst1;
    Comma* commaAst2;
    InitDeclarator* initDeclaratorAst3;

    InitDeclaratorList2(
        InitDeclaratorList* initDeclaratorListAst1,
        Comma* commaAst2,
        InitDeclarator* initDeclaratorAst3
    ): initDeclaratorListAst1(initDeclaratorListAst1), commaAst2(commaAst2), initDeclaratorAst3(initDeclaratorAst3) {}

    virtual ~InitDeclaratorList2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_COMMA_
#define _CLASS_COMMA_
class Comma;
#endif //_CLASS_COMMA_
#ifndef _CLASS_INITDECLARATOR_
#define _CLASS_INITDECLARATOR_
class InitDeclarator;
#endif //_CLASS_INITDECLARATOR_

#endif // _INIT_DECLARATOR_LIST_H_