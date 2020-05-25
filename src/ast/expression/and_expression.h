// Generated by buildSrc/GenerateAST.py
#ifndef _AND_EXPRESSION_H_
#define _AND_EXPRESSION_H_

#include "ast/ast.h"
//#header

class AndExpression: public BasicAST {
public:
    virtual ~AndExpression() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class AndExpression1: public AndExpression {
public:
    EqualityExpression* equalityExpressionAst1;

    AndExpression1(
        EqualityExpression* equalityExpressionAst1
    ): equalityExpressionAst1(equalityExpressionAst1) {}

    virtual ~AndExpression1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AndExpression2: public AndExpression {
public:
    AndExpression* andExpressionAst1;
    And* andAst2;
    EqualityExpression* equalityExpressionAst3;

    AndExpression2(
        AndExpression* andExpressionAst1,
        And* andAst2,
        EqualityExpression* equalityExpressionAst3
    ): andExpressionAst1(andExpressionAst1), andAst2(andAst2), equalityExpressionAst3(equalityExpressionAst3) {}

    virtual ~AndExpression2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_EQUALITYEXPRESSION_
#define _CLASS_EQUALITYEXPRESSION_
class EqualityExpression;
#endif //_CLASS_EQUALITYEXPRESSION_
#ifndef _CLASS_AND_
#define _CLASS_AND_
class And;
#endif //_CLASS_AND_

#endif // _AND_EXPRESSION_H_