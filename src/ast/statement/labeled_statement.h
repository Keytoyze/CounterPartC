// Generated by buildSrc/GenerateAST.py
#ifndef _LABELED_STATEMENT_H_
#define _LABELED_STATEMENT_H_

//#include "ast/ast.h"
class Case;
class Colon;
class ConstantExpression;
class Default;
class Identifier;
class Statement;

class LabeledStatement: public BasicAST {
public:
    virtual ~LabeledStatement() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class LabeledStatement1: public LabeledStatement {
public:
    Identifier* identifierAst1;
    Colon* colonAst2;
    Statement* statementAst3;

    LabeledStatement1(
        Identifier* identifierAst1,
        Colon* colonAst2,
        Statement* statementAst3
    ): identifierAst1(identifierAst1), colonAst2(colonAst2), statementAst3(statementAst3) {}

    virtual ~LabeledStatement1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class LabeledStatement2: public LabeledStatement {
public:
    Case* caseAst1;
    ConstantExpression* constantExpressionAst2;
    Colon* colonAst3;
    Statement* statementAst4;

    LabeledStatement2(
        Case* caseAst1,
        ConstantExpression* constantExpressionAst2,
        Colon* colonAst3,
        Statement* statementAst4
    ): caseAst1(caseAst1), constantExpressionAst2(constantExpressionAst2), colonAst3(colonAst3), statementAst4(statementAst4) {}

    virtual ~LabeledStatement2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class LabeledStatement3: public LabeledStatement {
public:
    Default* defaultAst1;
    Colon* colonAst2;
    Statement* statementAst3;

    LabeledStatement3(
        Default* defaultAst1,
        Colon* colonAst2,
        Statement* statementAst3
    ): defaultAst1(defaultAst1), colonAst2(colonAst2), statementAst3(statementAst3) {}

    virtual ~LabeledStatement3();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

#endif // _LABELED_STATEMENT_H_
