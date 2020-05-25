// Generated by buildSrc/GenerateAST.py
#ifndef _ENUMERATOR_LIST_H_
#define _ENUMERATOR_LIST_H_

#include "ast/ast.h"
//#header

class EnumeratorList: public BasicAST {
public:
    virtual ~EnumeratorList() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class EnumeratorList1: public EnumeratorList {
public:
    Enumerator* enumeratorAst1;

    EnumeratorList1(
        Enumerator* enumeratorAst1
    ): enumeratorAst1(enumeratorAst1) {}

    virtual ~EnumeratorList1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class EnumeratorList2: public EnumeratorList {
public:
    EnumeratorList* enumeratorListAst1;
    Comma* commaAst2;
    Enumerator* enumeratorAst3;

    EnumeratorList2(
        EnumeratorList* enumeratorListAst1,
        Comma* commaAst2,
        Enumerator* enumeratorAst3
    ): enumeratorListAst1(enumeratorListAst1), commaAst2(commaAst2), enumeratorAst3(enumeratorAst3) {}

    virtual ~EnumeratorList2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_COMMA_
#define _CLASS_COMMA_
class Comma;
#endif //_CLASS_COMMA_
#ifndef _CLASS_ENUMERATOR_
#define _CLASS_ENUMERATOR_
class Enumerator;
#endif //_CLASS_ENUMERATOR_

#endif // _ENUMERATOR_LIST_H_