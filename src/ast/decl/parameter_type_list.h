// Generated by buildSrc/GenerateAST.py
#ifndef _PARAMETER_TYPE_LIST_H_
#define _PARAMETER_TYPE_LIST_H_

//#include "ast/ast.h"
class Comma;
class Ellipsis;
class ParameterList;

class ParameterTypeList: public BasicAST {
public:
    std::vector<std::pair<Type, std::string>> parameterList;
    virtual ~ParameterTypeList() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class ParameterTypeList1: public ParameterTypeList {
public:
    ParameterList* parameterListAst1;

    ParameterTypeList1(
        ParameterList* parameterListAst1
    ): parameterListAst1(parameterListAst1) {}

    virtual ~ParameterTypeList1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class ParameterTypeList2: public ParameterTypeList {
public:
    ParameterList* parameterListAst1;
    Comma* commaAst2;
    Ellipsis* ellipsisAst3;

    ParameterTypeList2(
        ParameterList* parameterListAst1,
        Comma* commaAst2,
        Ellipsis* ellipsisAst3
    ): parameterListAst1(parameterListAst1), commaAst2(commaAst2), ellipsisAst3(ellipsisAst3) {}

    virtual ~ParameterTypeList2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

#endif // _PARAMETER_TYPE_LIST_H_
