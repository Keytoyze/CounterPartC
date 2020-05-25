// Generated by buildSrc/GenerateAST.py
#ifndef _ASSIGNMENT_EXPRESSION_H_
#define _ASSIGNMENT_EXPRESSION_H_

#include "ast/ast.h"
//#header

class AssignmentExpression: public BasicAST {
public:
    virtual ~AssignmentExpression() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class AssignmentExpression1: public AssignmentExpression {
public:
    ConditionalExpression* conditionalExpressionAst1;

    AssignmentExpression1(
        ConditionalExpression* conditionalExpressionAst1
    ): conditionalExpressionAst1(conditionalExpressionAst1) {}

    virtual ~AssignmentExpression1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AssignmentExpression2: public AssignmentExpression {
public:
    UnaryExpression* unaryExpressionAst1;
    AssignmentOperator* assignmentOperatorAst2;
    AssignmentExpression* assignmentExpressionAst3;

    AssignmentExpression2(
        UnaryExpression* unaryExpressionAst1,
        AssignmentOperator* assignmentOperatorAst2,
        AssignmentExpression* assignmentExpressionAst3
    ): unaryExpressionAst1(unaryExpressionAst1), assignmentOperatorAst2(assignmentOperatorAst2), assignmentExpressionAst3(assignmentExpressionAst3) {}

    virtual ~AssignmentExpression2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_CONDITIONALEXPRESSION_
#define _CLASS_CONDITIONALEXPRESSION_
class ConditionalExpression;
#endif //_CLASS_CONDITIONALEXPRESSION_
#ifndef _CLASS_UNARYEXPRESSION_
#define _CLASS_UNARYEXPRESSION_
class UnaryExpression;
#endif //_CLASS_UNARYEXPRESSION_
#ifndef _CLASS_ASSIGNMENTOPERATOR_
#define _CLASS_ASSIGNMENTOPERATOR_
class AssignmentOperator;
#endif //_CLASS_ASSIGNMENTOPERATOR_

#endif // _ASSIGNMENT_EXPRESSION_H_