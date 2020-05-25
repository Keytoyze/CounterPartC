// Generated by buildSrc/GenerateAST.py
#ifndef _TOKEN_H_
#define _TOKEN_H_

#include "ast/basic_ast.h"
#include <iostream>
#include <string>

class BasicToken: public BasicAST {
private:
    std::string tokenName;
public:
    BasicToken(): tokenName("") {}
    BasicToken(std::string tokenName): tokenName(tokenName) {}
    virtual ~BasicToken() {}

    virtual void GenerateIR(Context& context) {}
    virtual void Dump(int depth) {
        if (tokenName.length() != 0) {
            std::cout << "[" << depth << "] " << tokenName << std::endl;
        }
    }
};

// !
class Exclamation: public BasicToken {
public:
    Exclamation(): BasicToken("Exclamation") {}
};

// !=
class NeOp: public BasicToken {
public:
    NeOp(): BasicToken("NeOp") {}
};

// %
class Mod: public BasicToken {
public:
    Mod(): BasicToken("Mod") {}
};

// %=
class ModAssign: public BasicToken {
public:
    ModAssign(): BasicToken("ModAssign") {}
};

// &
class And: public BasicToken {
public:
    And(): BasicToken("And") {}
};

// &&
class AndOp: public BasicToken {
public:
    AndOp(): BasicToken("AndOp") {}
};

// &=
class AndAssign: public BasicToken {
public:
    AndAssign(): BasicToken("AndAssign") {}
};

// (
class LRound: public BasicToken {
public:
    LRound(): BasicToken("LRound") {}
};

// )
class RRound: public BasicToken {
public:
    RRound(): BasicToken("RRound") {}
};

// *
class Mul: public BasicToken {
public:
    Mul(): BasicToken("Mul") {}
};

// *=
class MulAssign: public BasicToken {
public:
    MulAssign(): BasicToken("MulAssign") {}
};

// +
class Add: public BasicToken {
public:
    Add(): BasicToken("Add") {}
};

// ++
class IncOp: public BasicToken {
public:
    IncOp(): BasicToken("IncOp") {}
};

// +=
class AddAssign: public BasicToken {
public:
    AddAssign(): BasicToken("AddAssign") {}
};

// ,
class Comma: public BasicToken {
public:
    Comma(): BasicToken("Comma") {}
};

// -
class Sub: public BasicToken {
public:
    Sub(): BasicToken("Sub") {}
};

// --
class DecOp: public BasicToken {
public:
    DecOp(): BasicToken("DecOp") {}
};

// -=
class SubAssign: public BasicToken {
public:
    SubAssign(): BasicToken("SubAssign") {}
};

// ->
class PtrOp: public BasicToken {
public:
    PtrOp(): BasicToken("PtrOp") {}
};

// .
class Period: public BasicToken {
public:
    Period(): BasicToken("Period") {}
};

// /
class Div: public BasicToken {
public:
    Div(): BasicToken("Div") {}
};

// /=
class DivAssign: public BasicToken {
public:
    DivAssign(): BasicToken("DivAssign") {}
};

// :
class Colon: public BasicToken {
public:
    Colon(): BasicToken("Colon") {}
};

// ;
class SimicolonSingle: public BasicToken {
public:
    SimicolonSingle(): BasicToken("SimicolonSingle") {}
};

// <
class LAngle: public BasicToken {
public:
    LAngle(): BasicToken("LAngle") {}
};

// <<
class LeftOp: public BasicToken {
public:
    LeftOp(): BasicToken("LeftOp") {}
};

// <<=
class LeftAssign: public BasicToken {
public:
    LeftAssign(): BasicToken("LeftAssign") {}
};

// <=
class LeOp: public BasicToken {
public:
    LeOp(): BasicToken("LeOp") {}
};

// =
class Eq: public BasicToken {
public:
    Eq(): BasicToken("Eq") {}
};

// ==
class EqOp: public BasicToken {
public:
    EqOp(): BasicToken("EqOp") {}
};

// >
class RAngle: public BasicToken {
public:
    RAngle(): BasicToken("RAngle") {}
};

// >=
class GeOp: public BasicToken {
public:
    GeOp(): BasicToken("GeOp") {}
};

// >>
class RightOp: public BasicToken {
public:
    RightOp(): BasicToken("RightOp") {}
};

// >>=
class RightAssign: public BasicToken {
public:
    RightAssign(): BasicToken("RightAssign") {}
};

// ?
class Question: public BasicToken {
public:
    Question(): BasicToken("Question") {}
};

// [
class LSquare: public BasicToken {
public:
    LSquare(): BasicToken("LSquare") {}
};

// ]
class RSquare: public BasicToken {
public:
    RSquare(): BasicToken("RSquare") {}
};

// ^
class Caret: public BasicToken {
public:
    Caret(): BasicToken("Caret") {}
};

// ^=
class XorAssign: public BasicToken {
public:
    XorAssign(): BasicToken("XorAssign") {}
};

// auto
class Auto: public BasicToken {
public:
    Auto(): BasicToken("Auto") {}
};

// break
class Break: public BasicToken {
public:
    Break(): BasicToken("Break") {}
};

// case
class Case: public BasicToken {
public:
    Case(): BasicToken("Case") {}
};

// char
class Char: public BasicToken {
public:
    Char(): BasicToken("Char") {}
};

// const
class Const: public BasicToken {
public:
    Const(): BasicToken("Const") {}
};

// continue
class Continue: public BasicToken {
public:
    Continue(): BasicToken("Continue") {}
};

// default
class Default: public BasicToken {
public:
    Default(): BasicToken("Default") {}
};

// do
class Do: public BasicToken {
public:
    Do(): BasicToken("Do") {}
};

// double
class Double: public BasicToken {
public:
    Double(): BasicToken("Double") {}
};

// ellipsis
class Ellipsis: public BasicToken {
public:
    Ellipsis(): BasicToken("Ellipsis") {}
};

// else
class Else: public BasicToken {
public:
    Else(): BasicToken("Else") {}
};

// enum
class Enum: public BasicToken {
public:
    Enum(): BasicToken("Enum") {}
};

// extern
class Extern: public BasicToken {
public:
    Extern(): BasicToken("Extern") {}
};

// float
class Float: public BasicToken {
public:
    Float(): BasicToken("Float") {}
};

// for
class For: public BasicToken {
public:
    For(): BasicToken("For") {}
};

// goto
class Goto: public BasicToken {
public:
    Goto(): BasicToken("Goto") {}
};

// if
class If: public BasicToken {
public:
    If(): BasicToken("If") {}
};

// int
class Int: public BasicToken {
public:
    Int(): BasicToken("Int") {}
};

// long
class Long: public BasicToken {
public:
    Long(): BasicToken("Long") {}
};

// register
class Register: public BasicToken {
public:
    Register(): BasicToken("Register") {}
};

// return
class Return: public BasicToken {
public:
    Return(): BasicToken("Return") {}
};

// short
class Short: public BasicToken {
public:
    Short(): BasicToken("Short") {}
};

// signed
class Signed: public BasicToken {
public:
    Signed(): BasicToken("Signed") {}
};

// sizeof
class Sizeof: public BasicToken {
public:
    Sizeof(): BasicToken("Sizeof") {}
};

// static
class Static: public BasicToken {
public:
    Static(): BasicToken("Static") {}
};

// struct
class Struct: public BasicToken {
public:
    Struct(): BasicToken("Struct") {}
};

// switch
class Switch: public BasicToken {
public:
    Switch(): BasicToken("Switch") {}
};

// type_name_token
class TypeNameToken: public BasicToken {
public:
    TypeNameToken(): BasicToken("TypeNameToken") {}
};

// typedef
class Typedef: public BasicToken {
public:
    Typedef(): BasicToken("Typedef") {}
};

// union
class Union: public BasicToken {
public:
    Union(): BasicToken("Union") {}
};

// unsigned
class Unsigned: public BasicToken {
public:
    Unsigned(): BasicToken("Unsigned") {}
};

// void
class Void: public BasicToken {
public:
    Void(): BasicToken("Void") {}
};

// volatile
class Volatile: public BasicToken {
public:
    Volatile(): BasicToken("Volatile") {}
};

// while
class While: public BasicToken {
public:
    While(): BasicToken("While") {}
};

// {
class LCurly: public BasicToken {
public:
    LCurly(): BasicToken("LCurly") {}
};

// |
class Vertical: public BasicToken {
public:
    Vertical(): BasicToken("Vertical") {}
};

// |=
class OrAssign: public BasicToken {
public:
    OrAssign(): BasicToken("OrAssign") {}
};

// ||
class OrOp: public BasicToken {
public:
    OrOp(): BasicToken("OrOp") {}
};

// }
class RCurly: public BasicToken {
public:
    RCurly(): BasicToken("RCurly") {}
};

// ~
class Tilde: public BasicToken {
public:
    Tilde(): BasicToken("Tilde") {}
};

#endif //_TOKEN_H_
