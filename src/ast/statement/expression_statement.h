// Generated by buildSrc/GenerateAST.py
#ifndef _EXPRESSION_STATEMENT_H_
#define _EXPRESSION_STATEMENT_H_

#include "ast/ast.h"
//#header

class ExpressionStatement: public BasicAST {
public:
    virtual ~ExpressionStatement() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class ExpressionStatement1: public ExpressionStatement {
public:
    SimicolonSingle* simicolonSingleAst1;

    ExpressionStatement1(
        SimicolonSingle* simicolonSingleAst1
    ): simicolonSingleAst1(simicolonSingleAst1) {}

    virtual ~ExpressionStatement1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class ExpressionStatement2: public ExpressionStatement {
public:
    Expression* expressionAst1;
    SimicolonSingle* simicolonSingleAst2;

    ExpressionStatement2(
        Expression* expressionAst1,
        SimicolonSingle* simicolonSingleAst2
    ): expressionAst1(expressionAst1), simicolonSingleAst2(simicolonSingleAst2) {}

    virtual ~ExpressionStatement2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_EXPRESSION_
#define _CLASS_EXPRESSION_
class Expression;
#endif //_CLASS_EXPRESSION_
#ifndef _CLASS_SIMICOLONSINGLE_
#define _CLASS_SIMICOLONSINGLE_
class SimicolonSingle;
#endif //_CLASS_SIMICOLONSINGLE_

#endif // _EXPRESSION_STATEMENT_H_
