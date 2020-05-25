// Generated by buildSrc/GenerateAST.py
#ifndef _STORAGE_CLASS_SPECIFIER_H_
#define _STORAGE_CLASS_SPECIFIER_H_

#include "ast/ast.h"
//#header

class StorageClassSpecifier: public BasicAST {
public:
    virtual ~StorageClassSpecifier() {}
    virtual void GenerateIR(Context& context) {}
    virtual void Dump(int depth) {}
};

class StorageClassSpecifier1: public StorageClassSpecifier {
public:
    Typedef* typedefAst1;

    StorageClassSpecifier1(
        Typedef* typedefAst1
    ): typedefAst1(typedefAst1) {}

    virtual ~StorageClassSpecifier1();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class StorageClassSpecifier2: public StorageClassSpecifier {
public:
    Extern* externAst1;

    StorageClassSpecifier2(
        Extern* externAst1
    ): externAst1(externAst1) {}

    virtual ~StorageClassSpecifier2();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class StorageClassSpecifier3: public StorageClassSpecifier {
public:
    Static* staticAst1;

    StorageClassSpecifier3(
        Static* staticAst1
    ): staticAst1(staticAst1) {}

    virtual ~StorageClassSpecifier3();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class StorageClassSpecifier4: public StorageClassSpecifier {
public:
    Auto* autoAst1;

    StorageClassSpecifier4(
        Auto* autoAst1
    ): autoAst1(autoAst1) {}

    virtual ~StorageClassSpecifier4();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};

class StorageClassSpecifier5: public StorageClassSpecifier {
public:
    Register* registerAst1;

    StorageClassSpecifier5(
        Register* registerAst1
    ): registerAst1(registerAst1) {}

    virtual ~StorageClassSpecifier5();
    virtual void GenerateIR(Context& context);
    virtual void Dump(int depth);

};


#else

#ifndef _CLASS_TYPEDEF_
#define _CLASS_TYPEDEF_
class Typedef;
#endif //_CLASS_TYPEDEF_
#ifndef _CLASS_STATIC_
#define _CLASS_STATIC_
class Static;
#endif //_CLASS_STATIC_
#ifndef _CLASS_REGISTER_
#define _CLASS_REGISTER_
class Register;
#endif //_CLASS_REGISTER_
#ifndef _CLASS_AUTO_
#define _CLASS_AUTO_
class Auto;
#endif //_CLASS_AUTO_
#ifndef _CLASS_EXTERN_
#define _CLASS_EXTERN_
class Extern;
#endif //_CLASS_EXTERN_

#endif // _STORAGE_CLASS_SPECIFIER_H_
