// Generated by buildSrc/GenerateAST.py
#ifndef _EXCLUSIVE_OR_EXPRESSION_H_
#define _EXCLUSIVE_OR_EXPRESSION_H_

#include "ast/ast.h"
//#header

class ExclusiveOrExpression: public BasicAST {
public:
    virtual ~ExclusiveOrExpression() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class ExclusiveOrExpression1: public ExclusiveOrExpression {
public:
    AndExpression* andExpressionAst1;

    ExclusiveOrExpression1(
        AndExpression* andExpressionAst1
    ): andExpressionAst1(andExpressionAst1) {}

    virtual ~ExclusiveOrExpression1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class ExclusiveOrExpression2: public ExclusiveOrExpression {
public:
    ExclusiveOrExpression* exclusiveOrExpressionAst1;
    Caret* caretAst2;
    AndExpression* andExpressionAst3;

    ExclusiveOrExpression2(
        ExclusiveOrExpression* exclusiveOrExpressionAst1,
        Caret* caretAst2,
        AndExpression* andExpressionAst3
    ): exclusiveOrExpressionAst1(exclusiveOrExpressionAst1), caretAst2(caretAst2), andExpressionAst3(andExpressionAst3) {}

    virtual ~ExclusiveOrExpression2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_ANDEXPRESSION_
#define _CLASS_ANDEXPRESSION_
class AndExpression;
#endif //_CLASS_ANDEXPRESSION_
#ifndef _CLASS_CARET_
#define _CLASS_CARET_
class Caret;
#endif //_CLASS_CARET_

#endif // _EXCLUSIVE_OR_EXPRESSION_H_
