// Generated by buildSrc/GenerateAST.py
#ifndef _ARGUMENT_EXPRESSION_LIST_H_
#define _ARGUMENT_EXPRESSION_LIST_H_

#include "ast/ast.h"
//#header

class ArgumentExpressionList: public BasicAST {
public:
    virtual ~ArgumentExpressionList() {}
    virtual void GenerateIR(Context& context) {}
    virtual void Dump(int depth) {}
};

class ArgumentExpressionList1: public ArgumentExpressionList {
public:
    AssignmentExpression* assignmentExpressionAst1;

    ArgumentExpressionList1(
        AssignmentExpression* assignmentExpressionAst1
    ): assignmentExpressionAst1(assignmentExpressionAst1) {}

    virtual ~ArgumentExpressionList1();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class ArgumentExpressionList2: public ArgumentExpressionList {
public:
    ArgumentExpressionList* argumentExpressionListAst1;
    Comma* commaAst2;
    AssignmentExpression* assignmentExpressionAst3;

    ArgumentExpressionList2(
        ArgumentExpressionList* argumentExpressionListAst1,
        Comma* commaAst2,
        AssignmentExpression* assignmentExpressionAst3
    ): argumentExpressionListAst1(argumentExpressionListAst1), commaAst2(commaAst2), assignmentExpressionAst3(assignmentExpressionAst3) {}

    virtual ~ArgumentExpressionList2();
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

#endif // _ARGUMENT_EXPRESSION_LIST_H_
