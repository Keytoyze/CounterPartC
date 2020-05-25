// Generated by buildSrc/GenerateAST.py
#ifndef _SHIFT_EXPRESSION_H_
#define _SHIFT_EXPRESSION_H_

#include "ast/ast.h"
//#header

class ShiftExpression: public BasicAST {
public:
    virtual ~ShiftExpression() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class ShiftExpression1: public ShiftExpression {
public:
    AdditiveExpression* additiveExpressionAst1;

    ShiftExpression1(
        AdditiveExpression* additiveExpressionAst1
    ): additiveExpressionAst1(additiveExpressionAst1) {}

    virtual ~ShiftExpression1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class ShiftExpression2: public ShiftExpression {
public:
    ShiftExpression* shiftExpressionAst1;
    LeftOp* leftOpAst2;
    AdditiveExpression* additiveExpressionAst3;

    ShiftExpression2(
        ShiftExpression* shiftExpressionAst1,
        LeftOp* leftOpAst2,
        AdditiveExpression* additiveExpressionAst3
    ): shiftExpressionAst1(shiftExpressionAst1), leftOpAst2(leftOpAst2), additiveExpressionAst3(additiveExpressionAst3) {}

    virtual ~ShiftExpression2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class ShiftExpression3: public ShiftExpression {
public:
    ShiftExpression* shiftExpressionAst1;
    RightOp* rightOpAst2;
    AdditiveExpression* additiveExpressionAst3;

    ShiftExpression3(
        ShiftExpression* shiftExpressionAst1,
        RightOp* rightOpAst2,
        AdditiveExpression* additiveExpressionAst3
    ): shiftExpressionAst1(shiftExpressionAst1), rightOpAst2(rightOpAst2), additiveExpressionAst3(additiveExpressionAst3) {}

    virtual ~ShiftExpression3();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_ADDITIVEEXPRESSION_
#define _CLASS_ADDITIVEEXPRESSION_
class AdditiveExpression;
#endif //_CLASS_ADDITIVEEXPRESSION_
#ifndef _CLASS_LEFTOP_
#define _CLASS_LEFTOP_
class LeftOp;
#endif //_CLASS_LEFTOP_
#ifndef _CLASS_RIGHTOP_
#define _CLASS_RIGHTOP_
class RightOp;
#endif //_CLASS_RIGHTOP_

#endif // _SHIFT_EXPRESSION_H_