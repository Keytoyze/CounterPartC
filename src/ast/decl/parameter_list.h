// Generated by buildSrc/GenerateAST.py
#ifndef _PARAMETER_LIST_H_
#define _PARAMETER_LIST_H_

#include "ast/ast.h"
//#header

class ParameterList: public BasicAST {
public:
    virtual ~ParameterList() {}
    virtual void GenerateIR(Context& context) {}
    virtual void Dump(int depth) {}
};

class ParameterList1: public ParameterList {
public:
    ParameterDeclaration* parameterDeclarationAst1;

    ParameterList1(
        ParameterDeclaration* parameterDeclarationAst1
    ): parameterDeclarationAst1(parameterDeclarationAst1) {}

    virtual ~ParameterList1();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class ParameterList2: public ParameterList {
public:
    ParameterList* parameterListAst1;
    Comma* commaAst2;
    ParameterDeclaration* parameterDeclarationAst3;

    ParameterList2(
        ParameterList* parameterListAst1,
        Comma* commaAst2,
        ParameterDeclaration* parameterDeclarationAst3
    ): parameterListAst1(parameterListAst1), commaAst2(commaAst2), parameterDeclarationAst3(parameterDeclarationAst3) {}

    virtual ~ParameterList2();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_PARAMETERDECLARATION_
#define _CLASS_PARAMETERDECLARATION_
class ParameterDeclaration;
#endif //_CLASS_PARAMETERDECLARATION_
#ifndef _CLASS_COMMA_
#define _CLASS_COMMA_
class Comma;
#endif //_CLASS_COMMA_

#endif // _PARAMETER_LIST_H_
