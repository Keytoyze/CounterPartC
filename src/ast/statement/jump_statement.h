// Generated by buildSrc/GenerateAST.py
#ifndef _JUMP_STATEMENT_H_
#define _JUMP_STATEMENT_H_

#include "ast/ast.h"
//#header

class JumpStatement: public BasicAST {
public:
    virtual ~JumpStatement() {}
    virtual IRValuePtr GenerateIR(Context& context) { return nullptr; }
    virtual void Dump(int depth) {}
};

class JumpStatement1: public JumpStatement {
public:
    Goto* gotoAst1;
    Identifier* identifierAst2;
    SimicolonSingle* simicolonSingleAst3;

    JumpStatement1(
        Goto* gotoAst1,
        Identifier* identifierAst2,
        SimicolonSingle* simicolonSingleAst3
    ): gotoAst1(gotoAst1), identifierAst2(identifierAst2), simicolonSingleAst3(simicolonSingleAst3) {}

    virtual ~JumpStatement1();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class JumpStatement2: public JumpStatement {
public:
    Continue* continueAst1;
    SimicolonSingle* simicolonSingleAst2;

    JumpStatement2(
        Continue* continueAst1,
        SimicolonSingle* simicolonSingleAst2
    ): continueAst1(continueAst1), simicolonSingleAst2(simicolonSingleAst2) {}

    virtual ~JumpStatement2();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class JumpStatement3: public JumpStatement {
public:
    Break* breakAst1;
    SimicolonSingle* simicolonSingleAst2;

    JumpStatement3(
        Break* breakAst1,
        SimicolonSingle* simicolonSingleAst2
    ): breakAst1(breakAst1), simicolonSingleAst2(simicolonSingleAst2) {}

    virtual ~JumpStatement3();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class JumpStatement4: public JumpStatement {
public:
    Return* returnAst1;
    SimicolonSingle* simicolonSingleAst2;

    JumpStatement4(
        Return* returnAst1,
        SimicolonSingle* simicolonSingleAst2
    ): returnAst1(returnAst1), simicolonSingleAst2(simicolonSingleAst2) {}

    virtual ~JumpStatement4();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class JumpStatement5: public JumpStatement {
public:
    Return* returnAst1;
    Expression* expressionAst2;
    SimicolonSingle* simicolonSingleAst3;

    JumpStatement5(
        Return* returnAst1,
        Expression* expressionAst2,
        SimicolonSingle* simicolonSingleAst3
    ): returnAst1(returnAst1), expressionAst2(expressionAst2), simicolonSingleAst3(simicolonSingleAst3) {}

    virtual ~JumpStatement5();
    virtual IRValuePtr GenerateIR(Context& context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_EXPRESSION_
#define _CLASS_EXPRESSION_
class Expression;
#endif //_CLASS_EXPRESSION_
#ifndef _CLASS_BREAK_
#define _CLASS_BREAK_
class Break;
#endif //_CLASS_BREAK_
#ifndef _CLASS_IDENTIFIER_
#define _CLASS_IDENTIFIER_
class Identifier;
#endif //_CLASS_IDENTIFIER_
#ifndef _CLASS_CONTINUE_
#define _CLASS_CONTINUE_
class Continue;
#endif //_CLASS_CONTINUE_
#ifndef _CLASS_RETURN_
#define _CLASS_RETURN_
class Return;
#endif //_CLASS_RETURN_
#ifndef _CLASS_GOTO_
#define _CLASS_GOTO_
class Goto;
#endif //_CLASS_GOTO_
#ifndef _CLASS_SIMICOLONSINGLE_
#define _CLASS_SIMICOLONSINGLE_
class SimicolonSingle;
#endif //_CLASS_SIMICOLONSINGLE_

#endif // _JUMP_STATEMENT_H_
