// Generated by buildSrc/GenerateAST.py
#ifndef _ASSIGNMENT_OPERATOR_H_
#define _ASSIGNMENT_OPERATOR_H_

#include "ast/ast.h"
//#header

class AssignmentOperator: public BasicAST {
public:
    virtual ~AssignmentOperator() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class AssignmentOperator1: public AssignmentOperator {
public:
    Eq* eqAst1;

    AssignmentOperator1(
        Eq* eqAst1
    ): eqAst1(eqAst1) {}

    virtual ~AssignmentOperator1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AssignmentOperator2: public AssignmentOperator {
public:
    MulAssign* mulAssignAst1;

    AssignmentOperator2(
        MulAssign* mulAssignAst1
    ): mulAssignAst1(mulAssignAst1) {}

    virtual ~AssignmentOperator2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AssignmentOperator3: public AssignmentOperator {
public:
    DivAssign* divAssignAst1;

    AssignmentOperator3(
        DivAssign* divAssignAst1
    ): divAssignAst1(divAssignAst1) {}

    virtual ~AssignmentOperator3();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AssignmentOperator4: public AssignmentOperator {
public:
    ModAssign* modAssignAst1;

    AssignmentOperator4(
        ModAssign* modAssignAst1
    ): modAssignAst1(modAssignAst1) {}

    virtual ~AssignmentOperator4();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AssignmentOperator5: public AssignmentOperator {
public:
    AddAssign* addAssignAst1;

    AssignmentOperator5(
        AddAssign* addAssignAst1
    ): addAssignAst1(addAssignAst1) {}

    virtual ~AssignmentOperator5();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AssignmentOperator6: public AssignmentOperator {
public:
    SubAssign* subAssignAst1;

    AssignmentOperator6(
        SubAssign* subAssignAst1
    ): subAssignAst1(subAssignAst1) {}

    virtual ~AssignmentOperator6();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AssignmentOperator7: public AssignmentOperator {
public:
    LeftAssign* leftAssignAst1;

    AssignmentOperator7(
        LeftAssign* leftAssignAst1
    ): leftAssignAst1(leftAssignAst1) {}

    virtual ~AssignmentOperator7();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AssignmentOperator8: public AssignmentOperator {
public:
    RightAssign* rightAssignAst1;

    AssignmentOperator8(
        RightAssign* rightAssignAst1
    ): rightAssignAst1(rightAssignAst1) {}

    virtual ~AssignmentOperator8();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AssignmentOperator9: public AssignmentOperator {
public:
    AndAssign* andAssignAst1;

    AssignmentOperator9(
        AndAssign* andAssignAst1
    ): andAssignAst1(andAssignAst1) {}

    virtual ~AssignmentOperator9();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AssignmentOperator10: public AssignmentOperator {
public:
    XorAssign* xorAssignAst1;

    AssignmentOperator10(
        XorAssign* xorAssignAst1
    ): xorAssignAst1(xorAssignAst1) {}

    virtual ~AssignmentOperator10();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class AssignmentOperator11: public AssignmentOperator {
public:
    OrAssign* orAssignAst1;

    AssignmentOperator11(
        OrAssign* orAssignAst1
    ): orAssignAst1(orAssignAst1) {}

    virtual ~AssignmentOperator11();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_MODASSIGN_
#define _CLASS_MODASSIGN_
class ModAssign;
#endif //_CLASS_MODASSIGN_
#ifndef _CLASS_ADDASSIGN_
#define _CLASS_ADDASSIGN_
class AddAssign;
#endif //_CLASS_ADDASSIGN_
#ifndef _CLASS_MULASSIGN_
#define _CLASS_MULASSIGN_
class MulAssign;
#endif //_CLASS_MULASSIGN_
#ifndef _CLASS_SUBASSIGN_
#define _CLASS_SUBASSIGN_
class SubAssign;
#endif //_CLASS_SUBASSIGN_
#ifndef _CLASS_RIGHTASSIGN_
#define _CLASS_RIGHTASSIGN_
class RightAssign;
#endif //_CLASS_RIGHTASSIGN_
#ifndef _CLASS_XORASSIGN_
#define _CLASS_XORASSIGN_
class XorAssign;
#endif //_CLASS_XORASSIGN_
#ifndef _CLASS_DIVASSIGN_
#define _CLASS_DIVASSIGN_
class DivAssign;
#endif //_CLASS_DIVASSIGN_
#ifndef _CLASS_LEFTASSIGN_
#define _CLASS_LEFTASSIGN_
class LeftAssign;
#endif //_CLASS_LEFTASSIGN_
#ifndef _CLASS_ORASSIGN_
#define _CLASS_ORASSIGN_
class OrAssign;
#endif //_CLASS_ORASSIGN_
#ifndef _CLASS_ANDASSIGN_
#define _CLASS_ANDASSIGN_
class AndAssign;
#endif //_CLASS_ANDASSIGN_
#ifndef _CLASS_EQ_
#define _CLASS_EQ_
class Eq;
#endif //_CLASS_EQ_

#endif // _ASSIGNMENT_OPERATOR_H_