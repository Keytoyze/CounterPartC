// Generated by buildSrc/GenerateAST.py
#ifndef _CAST_EXPRESSION_H_
#define _CAST_EXPRESSION_H_

#include "ast/ast.h"
//#header

class CastExpression: public BasicAST {
public:
    virtual ~CastExpression() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class CastExpression1: public CastExpression {
public:
    UnaryExpression* unaryExpressionAst1;

    CastExpression1(
        UnaryExpression* unaryExpressionAst1
    ): unaryExpressionAst1(unaryExpressionAst1) {}

    virtual ~CastExpression1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class CastExpression2: public CastExpression {
public:
    LRound* lRoundAst1;
    TypeName* typeNameAst2;
    RRound* rRoundAst3;
    CastExpression* castExpressionAst4;

    CastExpression2(
        LRound* lRoundAst1,
        TypeName* typeNameAst2,
        RRound* rRoundAst3,
        CastExpression* castExpressionAst4
    ): lRoundAst1(lRoundAst1), typeNameAst2(typeNameAst2), rRoundAst3(rRoundAst3), castExpressionAst4(castExpressionAst4) {}

    virtual ~CastExpression2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_RROUND_
#define _CLASS_RROUND_
class RRound;
#endif //_CLASS_RROUND_
#ifndef _CLASS_LROUND_
#define _CLASS_LROUND_
class LRound;
#endif //_CLASS_LROUND_
#ifndef _CLASS_UNARYEXPRESSION_
#define _CLASS_UNARYEXPRESSION_
class UnaryExpression;
#endif //_CLASS_UNARYEXPRESSION_
#ifndef _CLASS_TYPENAME_
#define _CLASS_TYPENAME_
class TypeName;
#endif //_CLASS_TYPENAME_

#endif // _CAST_EXPRESSION_H_
