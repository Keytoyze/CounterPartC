// Generated by buildSrc/GenerateAST.py
#ifndef _STRUCT_OR_UNION_H_
#define _STRUCT_OR_UNION_H_

#include "ast/ast.h"
//#header

class StructOrUnion: public BasicAST {
public:
    virtual ~StructOrUnion() {}
    virtual void GenerateIR(Context context) {}
    virtual void Dump(int depth) {}
};

class StructOrUnion1: public StructOrUnion {
public:
    Struct* structAst1;

    StructOrUnion1(
        Struct* structAst1
    ): structAst1(structAst1) {}

    virtual ~StructOrUnion1();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};

class StructOrUnion2: public StructOrUnion {
public:
    Union* unionAst1;

    StructOrUnion2(
        Union* unionAst1
    ): unionAst1(unionAst1) {}

    virtual ~StructOrUnion2();
    virtual void GenerateIR(Context context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_UNION_
#define _CLASS_UNION_
class Union;
#endif //_CLASS_UNION_
#ifndef _CLASS_STRUCT_
#define _CLASS_STRUCT_
class Struct;
#endif //_CLASS_STRUCT_

#endif // _STRUCT_OR_UNION_H_