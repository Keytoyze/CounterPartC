// Generated by buildSrc/GenerateAST.py
#ifndef _CONSTANT_EXPRESSION_H_
#define _CONSTANT_EXPRESSION_H_

#include "ast/ast.h"
//#header

class ConstantExpression: public BasicAST {
public:
    virtual ~ConstantExpression() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class ConstantExpression1: public ConstantExpression {
public:
    ConditionalExpression* conditionalExpressionAst1;

    ConstantExpression1(
        ConditionalExpression* conditionalExpressionAst1
    ): conditionalExpressionAst1(conditionalExpressionAst1) {}

    virtual ~ConstantExpression1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_CONDITIONALEXPRESSION_
#define _CLASS_CONDITIONALEXPRESSION_
class ConditionalExpression;
#endif //_CLASS_CONDITIONALEXPRESSION_

#endif // _CONSTANT_EXPRESSION_H_
