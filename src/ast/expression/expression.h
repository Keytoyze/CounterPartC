// Generated by buildSrc/GenerateAST.py
#ifndef _EXPRESSION_H_
#define _EXPRESSION_H_

#include "ast/ast.h"
//#header

class Expression: public BasicAST {
public:
    virtual ~Expression() {}
    virtual void GenerateIR(Context& context) {}
    virtual void Dump(int depth) {}
};

class Expression1: public Expression {
public:
    AssignmentExpression* assignmentExpressionAst1;

    Expression1(
        AssignmentExpression* assignmentExpressionAst1
    ): assignmentExpressionAst1(assignmentExpressionAst1) {}

    virtual ~Expression1();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class Expression2: public Expression {
public:
    Expression* expressionAst1;
    Comma* commaAst2;
    AssignmentExpression* assignmentExpressionAst3;

    Expression2(
        Expression* expressionAst1,
        Comma* commaAst2,
        AssignmentExpression* assignmentExpressionAst3
    ): expressionAst1(expressionAst1), commaAst2(commaAst2), assignmentExpressionAst3(assignmentExpressionAst3) {}

    virtual ~Expression2();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_COMMA_
#define _CLASS_COMMA_
class Comma;
#endif //_CLASS_COMMA_
#ifndef _CLASS_ASSIGNMENTEXPRESSION_
#define _CLASS_ASSIGNMENTEXPRESSION_
class AssignmentExpression;
#endif //_CLASS_ASSIGNMENTEXPRESSION_

#endif // _EXPRESSION_H_
