// Generated by buildSrc/GenerateAST.py
#ifndef _STATEMENT_H_
#define _STATEMENT_H_

#include "ast/ast.h"
//#header

class Statement: public BasicAST {
public:
    virtual ~Statement() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class Statement1: public Statement {
public:
    LabeledStatement* labeledStatementAst1;

    Statement1(
        LabeledStatement* labeledStatementAst1
    ): labeledStatementAst1(labeledStatementAst1) {}

    virtual ~Statement1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class Statement2: public Statement {
public:
    CompoundStatement* compoundStatementAst1;

    Statement2(
        CompoundStatement* compoundStatementAst1
    ): compoundStatementAst1(compoundStatementAst1) {}

    virtual ~Statement2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class Statement3: public Statement {
public:
    ExpressionStatement* expressionStatementAst1;

    Statement3(
        ExpressionStatement* expressionStatementAst1
    ): expressionStatementAst1(expressionStatementAst1) {}

    virtual ~Statement3();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class Statement4: public Statement {
public:
    SelectionStatement* selectionStatementAst1;

    Statement4(
        SelectionStatement* selectionStatementAst1
    ): selectionStatementAst1(selectionStatementAst1) {}

    virtual ~Statement4();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class Statement5: public Statement {
public:
    IterationStatement* iterationStatementAst1;

    Statement5(
        IterationStatement* iterationStatementAst1
    ): iterationStatementAst1(iterationStatementAst1) {}

    virtual ~Statement5();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class Statement6: public Statement {
public:
    JumpStatement* jumpStatementAst1;

    Statement6(
        JumpStatement* jumpStatementAst1
    ): jumpStatementAst1(jumpStatementAst1) {}

    virtual ~Statement6();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_LABELEDSTATEMENT_
#define _CLASS_LABELEDSTATEMENT_
class LabeledStatement;
#endif //_CLASS_LABELEDSTATEMENT_
#ifndef _CLASS_ITERATIONSTATEMENT_
#define _CLASS_ITERATIONSTATEMENT_
class IterationStatement;
#endif //_CLASS_ITERATIONSTATEMENT_
#ifndef _CLASS_COMPOUNDSTATEMENT_
#define _CLASS_COMPOUNDSTATEMENT_
class CompoundStatement;
#endif //_CLASS_COMPOUNDSTATEMENT_
#ifndef _CLASS_JUMPSTATEMENT_
#define _CLASS_JUMPSTATEMENT_
class JumpStatement;
#endif //_CLASS_JUMPSTATEMENT_
#ifndef _CLASS_EXPRESSIONSTATEMENT_
#define _CLASS_EXPRESSIONSTATEMENT_
class ExpressionStatement;
#endif //_CLASS_EXPRESSIONSTATEMENT_
#ifndef _CLASS_SELECTIONSTATEMENT_
#define _CLASS_SELECTIONSTATEMENT_
class SelectionStatement;
#endif //_CLASS_SELECTIONSTATEMENT_

#endif // _STATEMENT_H_