// Generated by buildSrc/GenerateAST.py
#ifndef _POSTFIX_EXPRESSION_H_
#define _POSTFIX_EXPRESSION_H_

#include "ast/ast.h"
//#header

class PostfixExpression: public BasicAST {
public:
    virtual ~PostfixExpression() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class PostfixExpression1: public PostfixExpression {
public:
    PrimaryExpression* primaryExpressionAst1;

    PostfixExpression1(
        PrimaryExpression* primaryExpressionAst1
    ): primaryExpressionAst1(primaryExpressionAst1) {}

    virtual ~PostfixExpression1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class PostfixExpression2: public PostfixExpression {
public:
    PostfixExpression* postfixExpressionAst1;
    LSquare* lSquareAst2;
    Expression* expressionAst3;
    RSquare* rSquareAst4;

    PostfixExpression2(
        PostfixExpression* postfixExpressionAst1,
        LSquare* lSquareAst2,
        Expression* expressionAst3,
        RSquare* rSquareAst4
    ): postfixExpressionAst1(postfixExpressionAst1), lSquareAst2(lSquareAst2), expressionAst3(expressionAst3), rSquareAst4(rSquareAst4) {}

    virtual ~PostfixExpression2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class PostfixExpression3: public PostfixExpression {
public:
    PostfixExpression* postfixExpressionAst1;
    LRound* lRoundAst2;
    RRound* rRoundAst3;

    PostfixExpression3(
        PostfixExpression* postfixExpressionAst1,
        LRound* lRoundAst2,
        RRound* rRoundAst3
    ): postfixExpressionAst1(postfixExpressionAst1), lRoundAst2(lRoundAst2), rRoundAst3(rRoundAst3) {}

    virtual ~PostfixExpression3();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class PostfixExpression4: public PostfixExpression {
public:
    PostfixExpression* postfixExpressionAst1;
    LRound* lRoundAst2;
    ArgumentExpressionList* argumentExpressionListAst3;
    RRound* rRoundAst4;

    PostfixExpression4(
        PostfixExpression* postfixExpressionAst1,
        LRound* lRoundAst2,
        ArgumentExpressionList* argumentExpressionListAst3,
        RRound* rRoundAst4
    ): postfixExpressionAst1(postfixExpressionAst1), lRoundAst2(lRoundAst2), argumentExpressionListAst3(argumentExpressionListAst3), rRoundAst4(rRoundAst4) {}

    virtual ~PostfixExpression4();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class PostfixExpression5: public PostfixExpression {
public:
    PostfixExpression* postfixExpressionAst1;
    Period* periodAst2;
    Identifier* identifierAst3;

    PostfixExpression5(
        PostfixExpression* postfixExpressionAst1,
        Period* periodAst2,
        Identifier* identifierAst3
    ): postfixExpressionAst1(postfixExpressionAst1), periodAst2(periodAst2), identifierAst3(identifierAst3) {}

    virtual ~PostfixExpression5();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class PostfixExpression6: public PostfixExpression {
public:
    PostfixExpression* postfixExpressionAst1;
    PtrOp* ptrOpAst2;
    Identifier* identifierAst3;

    PostfixExpression6(
        PostfixExpression* postfixExpressionAst1,
        PtrOp* ptrOpAst2,
        Identifier* identifierAst3
    ): postfixExpressionAst1(postfixExpressionAst1), ptrOpAst2(ptrOpAst2), identifierAst3(identifierAst3) {}

    virtual ~PostfixExpression6();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class PostfixExpression7: public PostfixExpression {
public:
    PostfixExpression* postfixExpressionAst1;
    IncOp* incOpAst2;

    PostfixExpression7(
        PostfixExpression* postfixExpressionAst1,
        IncOp* incOpAst2
    ): postfixExpressionAst1(postfixExpressionAst1), incOpAst2(incOpAst2) {}

    virtual ~PostfixExpression7();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class PostfixExpression8: public PostfixExpression {
public:
    PostfixExpression* postfixExpressionAst1;
    DecOp* decOpAst2;

    PostfixExpression8(
        PostfixExpression* postfixExpressionAst1,
        DecOp* decOpAst2
    ): postfixExpressionAst1(postfixExpressionAst1), decOpAst2(decOpAst2) {}

    virtual ~PostfixExpression8();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_EXPRESSION_
#define _CLASS_EXPRESSION_
class Expression;
#endif //_CLASS_EXPRESSION_
#ifndef _CLASS_LROUND_
#define _CLASS_LROUND_
class LRound;
#endif //_CLASS_LROUND_
#ifndef _CLASS_PTROP_
#define _CLASS_PTROP_
class PtrOp;
#endif //_CLASS_PTROP_
#ifndef _CLASS_IDENTIFIER_
#define _CLASS_IDENTIFIER_
class Identifier;
#endif //_CLASS_IDENTIFIER_
#ifndef _CLASS_RROUND_
#define _CLASS_RROUND_
class RRound;
#endif //_CLASS_RROUND_
#ifndef _CLASS_PERIOD_
#define _CLASS_PERIOD_
class Period;
#endif //_CLASS_PERIOD_
#ifndef _CLASS_ARGUMENTEXPRESSIONLIST_
#define _CLASS_ARGUMENTEXPRESSIONLIST_
class ArgumentExpressionList;
#endif //_CLASS_ARGUMENTEXPRESSIONLIST_
#ifndef _CLASS_INCOP_
#define _CLASS_INCOP_
class IncOp;
#endif //_CLASS_INCOP_
#ifndef _CLASS_PRIMARYEXPRESSION_
#define _CLASS_PRIMARYEXPRESSION_
class PrimaryExpression;
#endif //_CLASS_PRIMARYEXPRESSION_
#ifndef _CLASS_RSQUARE_
#define _CLASS_RSQUARE_
class RSquare;
#endif //_CLASS_RSQUARE_
#ifndef _CLASS_LSQUARE_
#define _CLASS_LSQUARE_
class LSquare;
#endif //_CLASS_LSQUARE_
#ifndef _CLASS_DECOP_
#define _CLASS_DECOP_
class DecOp;
#endif //_CLASS_DECOP_

#endif // _POSTFIX_EXPRESSION_H_