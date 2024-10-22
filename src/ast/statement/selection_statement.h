// Generated by buildSrc/GenerateAST.py
#ifndef _SELECTION_STATEMENT_H_
#define _SELECTION_STATEMENT_H_

//#include "ast/ast.h"
class Else;
class Expression;
class If;
class LRound;
class RRound;
class Statement;
class Switch;

class SelectionStatement: public BasicAST {
public:
    virtual ~SelectionStatement() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class SelectionStatement1: public SelectionStatement {
public:
    If* ifAst1;
    LRound* lRoundAst2;
    Expression* expressionAst3;
    RRound* rRoundAst4;
    Statement* statementAst5;

    SelectionStatement1(
        If* ifAst1,
        LRound* lRoundAst2,
        Expression* expressionAst3,
        RRound* rRoundAst4,
        Statement* statementAst5
    ): ifAst1(ifAst1), lRoundAst2(lRoundAst2), expressionAst3(expressionAst3), rRoundAst4(rRoundAst4), statementAst5(statementAst5) {}

    virtual ~SelectionStatement1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class SelectionStatement2: public SelectionStatement {
public:
    If* ifAst1;
    LRound* lRoundAst2;
    Expression* expressionAst3;
    RRound* rRoundAst4;
    Statement* statementAst5;
    Else* elseAst6;
    Statement* statementAst7;

    SelectionStatement2(
        If* ifAst1,
        LRound* lRoundAst2,
        Expression* expressionAst3,
        RRound* rRoundAst4,
        Statement* statementAst5,
        Else* elseAst6,
        Statement* statementAst7
    ): ifAst1(ifAst1), lRoundAst2(lRoundAst2), expressionAst3(expressionAst3), rRoundAst4(rRoundAst4), statementAst5(statementAst5), elseAst6(elseAst6), statementAst7(statementAst7) {}

    virtual ~SelectionStatement2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class SelectionStatement3: public SelectionStatement {
public:
    Switch* switchAst1;
    LRound* lRoundAst2;
    Expression* expressionAst3;
    RRound* rRoundAst4;
    Statement* statementAst5;

    SelectionStatement3(
        Switch* switchAst1,
        LRound* lRoundAst2,
        Expression* expressionAst3,
        RRound* rRoundAst4,
        Statement* statementAst5
    ): switchAst1(switchAst1), lRoundAst2(lRoundAst2), expressionAst3(expressionAst3), rRoundAst4(rRoundAst4), statementAst5(statementAst5) {}

    virtual ~SelectionStatement3();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

#endif // _SELECTION_STATEMENT_H_
