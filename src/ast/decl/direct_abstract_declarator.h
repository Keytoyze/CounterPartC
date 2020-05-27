// Generated by buildSrc/GenerateAST.py
#ifndef _DIRECT_ABSTRACT_DECLARATOR_H_
#define _DIRECT_ABSTRACT_DECLARATOR_H_

//#include "ast/ast.h"
class AbstractDeclarator;
class ConstantExpression;
class LRound;
class LSquare;
class ParameterTypeList;
class RRound;
class RSquare;

class DirectAbstractDeclarator: public BasicAST {
public:
    virtual ~DirectAbstractDeclarator() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class DirectAbstractDeclarator1: public DirectAbstractDeclarator {
public:
    LRound* lRoundAst1;
    AbstractDeclarator* abstractDeclaratorAst2;
    RRound* rRoundAst3;

    DirectAbstractDeclarator1(
        LRound* lRoundAst1,
        AbstractDeclarator* abstractDeclaratorAst2,
        RRound* rRoundAst3
    ): lRoundAst1(lRoundAst1), abstractDeclaratorAst2(abstractDeclaratorAst2), rRoundAst3(rRoundAst3) {}

    virtual ~DirectAbstractDeclarator1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectAbstractDeclarator2: public DirectAbstractDeclarator {
public:
    LSquare* lSquareAst1;
    RSquare* rSquareAst2;

    DirectAbstractDeclarator2(
        LSquare* lSquareAst1,
        RSquare* rSquareAst2
    ): lSquareAst1(lSquareAst1), rSquareAst2(rSquareAst2) {}

    virtual ~DirectAbstractDeclarator2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectAbstractDeclarator3: public DirectAbstractDeclarator {
public:
    LSquare* lSquareAst1;
    ConstantExpression* constantExpressionAst2;
    RSquare* rSquareAst3;

    DirectAbstractDeclarator3(
        LSquare* lSquareAst1,
        ConstantExpression* constantExpressionAst2,
        RSquare* rSquareAst3
    ): lSquareAst1(lSquareAst1), constantExpressionAst2(constantExpressionAst2), rSquareAst3(rSquareAst3) {}

    virtual ~DirectAbstractDeclarator3();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectAbstractDeclarator4: public DirectAbstractDeclarator {
public:
    DirectAbstractDeclarator* directAbstractDeclaratorAst1;
    LSquare* lSquareAst2;
    RSquare* rSquareAst3;

    DirectAbstractDeclarator4(
        DirectAbstractDeclarator* directAbstractDeclaratorAst1,
        LSquare* lSquareAst2,
        RSquare* rSquareAst3
    ): directAbstractDeclaratorAst1(directAbstractDeclaratorAst1), lSquareAst2(lSquareAst2), rSquareAst3(rSquareAst3) {}

    virtual ~DirectAbstractDeclarator4();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectAbstractDeclarator5: public DirectAbstractDeclarator {
public:
    DirectAbstractDeclarator* directAbstractDeclaratorAst1;
    LSquare* lSquareAst2;
    ConstantExpression* constantExpressionAst3;
    RSquare* rSquareAst4;

    DirectAbstractDeclarator5(
        DirectAbstractDeclarator* directAbstractDeclaratorAst1,
        LSquare* lSquareAst2,
        ConstantExpression* constantExpressionAst3,
        RSquare* rSquareAst4
    ): directAbstractDeclaratorAst1(directAbstractDeclaratorAst1), lSquareAst2(lSquareAst2), constantExpressionAst3(constantExpressionAst3), rSquareAst4(rSquareAst4) {}

    virtual ~DirectAbstractDeclarator5();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectAbstractDeclarator6: public DirectAbstractDeclarator {
public:
    LRound* lRoundAst1;
    RRound* rRoundAst2;

    DirectAbstractDeclarator6(
        LRound* lRoundAst1,
        RRound* rRoundAst2
    ): lRoundAst1(lRoundAst1), rRoundAst2(rRoundAst2) {}

    virtual ~DirectAbstractDeclarator6();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectAbstractDeclarator7: public DirectAbstractDeclarator {
public:
    LRound* lRoundAst1;
    ParameterTypeList* parameterTypeListAst2;
    RRound* rRoundAst3;

    DirectAbstractDeclarator7(
        LRound* lRoundAst1,
        ParameterTypeList* parameterTypeListAst2,
        RRound* rRoundAst3
    ): lRoundAst1(lRoundAst1), parameterTypeListAst2(parameterTypeListAst2), rRoundAst3(rRoundAst3) {}

    virtual ~DirectAbstractDeclarator7();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectAbstractDeclarator8: public DirectAbstractDeclarator {
public:
    DirectAbstractDeclarator* directAbstractDeclaratorAst1;
    LRound* lRoundAst2;
    RRound* rRoundAst3;

    DirectAbstractDeclarator8(
        DirectAbstractDeclarator* directAbstractDeclaratorAst1,
        LRound* lRoundAst2,
        RRound* rRoundAst3
    ): directAbstractDeclaratorAst1(directAbstractDeclaratorAst1), lRoundAst2(lRoundAst2), rRoundAst3(rRoundAst3) {}

    virtual ~DirectAbstractDeclarator8();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectAbstractDeclarator9: public DirectAbstractDeclarator {
public:
    DirectAbstractDeclarator* directAbstractDeclaratorAst1;
    LRound* lRoundAst2;
    ParameterTypeList* parameterTypeListAst3;
    RRound* rRoundAst4;

    DirectAbstractDeclarator9(
        DirectAbstractDeclarator* directAbstractDeclaratorAst1,
        LRound* lRoundAst2,
        ParameterTypeList* parameterTypeListAst3,
        RRound* rRoundAst4
    ): directAbstractDeclaratorAst1(directAbstractDeclaratorAst1), lRoundAst2(lRoundAst2), parameterTypeListAst3(parameterTypeListAst3), rRoundAst4(rRoundAst4) {}

    virtual ~DirectAbstractDeclarator9();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

#endif // _DIRECT_ABSTRACT_DECLARATOR_H_
