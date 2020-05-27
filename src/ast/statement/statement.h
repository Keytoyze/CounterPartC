// Generated by buildSrc/GenerateAST.py
#ifndef _STATEMENT_H_
#define _STATEMENT_H_

//#include "ast/ast.h"
class CompoundStatement;
class ExpressionStatement;
class IterationStatement;
class JumpStatement;
class LabeledStatement;
class SelectionStatement;

class Statement: public BasicAST {
public:
    virtual ~Statement() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class Statement1: public Statement {
public:
    LabeledStatement* labeledStatementAst1;

    Statement1(
        LabeledStatement* labeledStatementAst1
    ): labeledStatementAst1(labeledStatementAst1) {}

    virtual ~Statement1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class Statement2: public Statement {
public:
    CompoundStatement* compoundStatementAst1;

    Statement2(
        CompoundStatement* compoundStatementAst1
    ): compoundStatementAst1(compoundStatementAst1) {}

    virtual ~Statement2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class Statement3: public Statement {
public:
    ExpressionStatement* expressionStatementAst1;

    Statement3(
        ExpressionStatement* expressionStatementAst1
    ): expressionStatementAst1(expressionStatementAst1) {}

    virtual ~Statement3();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class Statement4: public Statement {
public:
    SelectionStatement* selectionStatementAst1;

    Statement4(
        SelectionStatement* selectionStatementAst1
    ): selectionStatementAst1(selectionStatementAst1) {}

    virtual ~Statement4();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class Statement5: public Statement {
public:
    IterationStatement* iterationStatementAst1;

    Statement5(
        IterationStatement* iterationStatementAst1
    ): iterationStatementAst1(iterationStatementAst1) {}

    virtual ~Statement5();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class Statement6: public Statement {
public:
    JumpStatement* jumpStatementAst1;

    Statement6(
        JumpStatement* jumpStatementAst1
    ): jumpStatementAst1(jumpStatementAst1) {}

    virtual ~Statement6();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

#endif // _STATEMENT_H_
