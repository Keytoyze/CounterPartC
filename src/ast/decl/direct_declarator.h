// Generated by buildSrc/GenerateAST.py
#ifndef _DIRECT_DECLARATOR_H_
#define _DIRECT_DECLARATOR_H_

//#include "ast/ast.h"
class ConstantExpression;
class Declarator;
class Identifier;
class IdentifierList;
class LRound;
class LSquare;
class ParameterTypeList;
class RRound;
class RSquare;

class DirectDeclarator: public BasicAST {
public:
    std::string identifier;
    std::vector<std::pair<Type, std::string>> parameterList;
    virtual ~DirectDeclarator() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class DirectDeclarator1: public DirectDeclarator {
public:
    Identifier* identifierAst1;

    DirectDeclarator1(
        Identifier* identifierAst1
    ): identifierAst1(identifierAst1) {}

    virtual ~DirectDeclarator1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectDeclarator2: public DirectDeclarator {
public:
    LRound* lRoundAst1;
    Declarator* declaratorAst2;
    RRound* rRoundAst3;

    DirectDeclarator2(
        LRound* lRoundAst1,
        Declarator* declaratorAst2,
        RRound* rRoundAst3
    ): lRoundAst1(lRoundAst1), declaratorAst2(declaratorAst2), rRoundAst3(rRoundAst3) {}

    virtual ~DirectDeclarator2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectDeclarator3: public DirectDeclarator {
public:
    DirectDeclarator* directDeclaratorAst1;
    LSquare* lSquareAst2;
    ConstantExpression* constantExpressionAst3;
    RSquare* rSquareAst4;

    DirectDeclarator3(
        DirectDeclarator* directDeclaratorAst1,
        LSquare* lSquareAst2,
        ConstantExpression* constantExpressionAst3,
        RSquare* rSquareAst4
    ): directDeclaratorAst1(directDeclaratorAst1), lSquareAst2(lSquareAst2), constantExpressionAst3(constantExpressionAst3), rSquareAst4(rSquareAst4) {}

    virtual ~DirectDeclarator3();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectDeclarator4: public DirectDeclarator {
public:
    DirectDeclarator* directDeclaratorAst1;
    LSquare* lSquareAst2;
    RSquare* rSquareAst3;

    DirectDeclarator4(
        DirectDeclarator* directDeclaratorAst1,
        LSquare* lSquareAst2,
        RSquare* rSquareAst3
    ): directDeclaratorAst1(directDeclaratorAst1), lSquareAst2(lSquareAst2), rSquareAst3(rSquareAst3) {}

    virtual ~DirectDeclarator4();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectDeclarator5: public DirectDeclarator {
public:
    DirectDeclarator* directDeclaratorAst1;
    LRound* lRoundAst2;
    ParameterTypeList* parameterTypeListAst3;
    RRound* rRoundAst4;

    DirectDeclarator5(
        DirectDeclarator* directDeclaratorAst1,
        LRound* lRoundAst2,
        ParameterTypeList* parameterTypeListAst3,
        RRound* rRoundAst4
    ): directDeclaratorAst1(directDeclaratorAst1), lRoundAst2(lRoundAst2), parameterTypeListAst3(parameterTypeListAst3), rRoundAst4(rRoundAst4) {}

    virtual ~DirectDeclarator5();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectDeclarator6: public DirectDeclarator {
public:
    DirectDeclarator* directDeclaratorAst1;
    LRound* lRoundAst2;
    IdentifierList* identifierListAst3;
    RRound* rRoundAst4;

    DirectDeclarator6(
        DirectDeclarator* directDeclaratorAst1,
        LRound* lRoundAst2,
        IdentifierList* identifierListAst3,
        RRound* rRoundAst4
    ): directDeclaratorAst1(directDeclaratorAst1), lRoundAst2(lRoundAst2), identifierListAst3(identifierListAst3), rRoundAst4(rRoundAst4) {}

    virtual ~DirectDeclarator6();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class DirectDeclarator7: public DirectDeclarator {
public:
    DirectDeclarator* directDeclaratorAst1;
    LRound* lRoundAst2;
    RRound* rRoundAst3;

    DirectDeclarator7(
        DirectDeclarator* directDeclaratorAst1,
        LRound* lRoundAst2,
        RRound* rRoundAst3
    ): directDeclaratorAst1(directDeclaratorAst1), lRoundAst2(lRoundAst2), rRoundAst3(rRoundAst3) {}

    virtual ~DirectDeclarator7();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

#endif // _DIRECT_DECLARATOR_H_
