%{
#include <cstdlib>
#include <cstdio>
#include <string>
#include <memory>
#include "ast/ast.h"
using namespace std;

extern char *yytext;
extern int column;
extern FILE * yyin;
extern FILE * yyout;
BasicAST* root;
extern int yylineno;

int yylex(void);
void yyerror(const char*); 
%}

%union {
    AbstractDeclarator* abstractDeclaratorAst;
    AdditiveExpression* additiveExpressionAst;
    AndExpression* andExpressionAst;
    ArgumentExpressionList* argumentExpressionListAst;
    AssignmentExpression* assignmentExpressionAst;
    AssignmentOperator* assignmentOperatorAst;
    CastExpression* castExpressionAst;
    CompoundStatement* compoundStatementAst;
    ConditionalExpression* conditionalExpressionAst;
    ConstantExpression* constantExpressionAst;
    Declaration* declarationAst;
    DeclarationList* declarationListAst;
    DeclarationSpecifiers* declarationSpecifiersAst;
    Declarator* declaratorAst;
    DirectAbstractDeclarator* directAbstractDeclaratorAst;
    DirectDeclarator* directDeclaratorAst;
    EnumSpecifier* enumSpecifierAst;
    Enumerator* enumeratorAst;
    EnumeratorList* enumeratorListAst;
    EqualityExpression* equalityExpressionAst;
    ExclusiveOrExpression* exclusiveOrExpressionAst;
    Expression* expressionAst;
    ExpressionStatement* expressionStatementAst;
    ExternalDeclaration* externalDeclarationAst;
    FunctionDefinition* functionDefinitionAst;
    IdentifierList* identifierListAst;
    InclusiveOrExpression* inclusiveOrExpressionAst;
    InitDeclarator* initDeclaratorAst;
    InitDeclaratorList* initDeclaratorListAst;
    Initializer* initializerAst;
    InitializerList* initializerListAst;
    IterationStatement* iterationStatementAst;
    JumpStatement* jumpStatementAst;
    LabeledStatement* labeledStatementAst;
    LogicalAndExpression* logicalAndExpressionAst;
    LogicalOrExpression* logicalOrExpressionAst;
    MultiplicativeExpression* multiplicativeExpressionAst;
    ParameterDeclaration* parameterDeclarationAst;
    ParameterList* parameterListAst;
    ParameterTypeList* parameterTypeListAst;
    Pointer* pointerAst;
    PostfixExpression* postfixExpressionAst;
    PrimaryExpression* primaryExpressionAst;
    RelationalExpression* relationalExpressionAst;
    SelectionStatement* selectionStatementAst;
    ShiftExpression* shiftExpressionAst;
    SpecifierQualifierList* specifierQualifierListAst;
    Statement* statementAst;
    StatementList* statementListAst;
    StorageClassSpecifier* storageClassSpecifierAst;
    StructDeclaration* structDeclarationAst;
    StructDeclarationList* structDeclarationListAst;
    StructDeclarator* structDeclaratorAst;
    StructDeclaratorList* structDeclaratorListAst;
    StructOrUnion* structOrUnionAst;
    StructOrUnionSpecifier* structOrUnionSpecifierAst;
    TranslationUnit* translationUnitAst;
    TypeName* typeNameAst;
    TypeQualifier* typeQualifierAst;
    TypeQualifierList* typeQualifierListAst;
    TypeSpecifier* typeSpecifierAst;
    UnaryExpression* unaryExpressionAst;
    UnaryOperator* unaryOperatorAst;
    // special tokens
    Constant* constant;
    StringLiteral* stringLiteral;
    Identifier* identifier;
}

%token '!' '%' '&' '(' ')' '*' '+' ',' '-' '.' '/' ':' ';' '<' '=' '>' '?' '[' ']' '^' '{' '|' '}' '~' ADD_ASSIGN AND_ASSIGN AND_OP AUTO BREAK CASE CHAR CONST CONSTANT CONTINUE DEC_OP DEFAULT DIV_ASSIGN DO DOUBLE ELLIPSIS ELSE ENUM EQ_OP EXTERN FLOAT FOR GE_OP GOTO IDENTIFIER IF INC_OP INT LEFT_ASSIGN LEFT_OP LE_OP LONG MOD_ASSIGN MUL_ASSIGN NE_OP OR_ASSIGN OR_OP PTR_OP REGISTER RETURN RIGHT_ASSIGN RIGHT_OP SHORT SIGNED SIZEOF STATIC STRING_LITERAL STRUCT SUB_ASSIGN SWITCH TYPEDEF TYPE_NAME_TOKEN UNION UNSIGNED VOID VOLATILE WHILE XOR_ASSIGN
%token <constant> CONSTANT
%token <stringLiteral> STRING_LITERAL
%token <identifier> IDENTIFIER

%type <storageClassSpecifierAst> storage_class_specifier
%type <expressionStatementAst> expression_statement
%type <translationUnitAst> translation_unit
%type <selectionStatementAst> selection_statement
%type <unaryExpressionAst> unary_expression
%type <initializerAst> initializer
%type <structOrUnionSpecifierAst> struct_or_union_specifier
%type <exclusiveOrExpressionAst> exclusive_or_expression
%type <identifierListAst> identifier_list
%type <initDeclaratorListAst> init_declarator_list
%type <structDeclarationListAst> struct_declaration_list
%type <enumeratorAst> enumerator
%type <declarationListAst> declaration_list
%type <pointerAst> pointer
%type <andExpressionAst> and_expression
%type <externalDeclarationAst> external_declaration
%type <typeSpecifierAst> type_specifier
%type <compoundStatementAst> compound_statement
%type <inclusiveOrExpressionAst> inclusive_or_expression
%type <iterationStatementAst> iteration_statement
%type <typeNameAst> type_name
%type <postfixExpressionAst> postfix_expression
%type <additiveExpressionAst> additive_expression
%type <statementAst> statement
%type <unaryOperatorAst> unary_operator
%type <castExpressionAst> cast_expression
%type <initializerListAst> initializer_list
%type <structDeclaratorListAst> struct_declarator_list
%type <logicalOrExpressionAst> logical_or_expression
%type <constantExpressionAst> constant_expression
%type <relationalExpressionAst> relational_expression
%type <structOrUnionAst> struct_or_union
%type <typeQualifierListAst> type_qualifier_list
%type <structDeclarationAst> struct_declaration
%type <assignmentExpressionAst> assignment_expression
%type <parameterTypeListAst> parameter_type_list
%type <parameterDeclarationAst> parameter_declaration
%type <multiplicativeExpressionAst> multiplicative_expression
%type <initDeclaratorAst> init_declarator
%type <argumentExpressionListAst> argument_expression_list
%type <statementListAst> statement_list
%type <primaryExpressionAst> primary_expression
%type <declarationSpecifiersAst> declaration_specifiers
%type <declarationAst> declaration
%type <directDeclaratorAst> direct_declarator
%type <logicalAndExpressionAst> logical_and_expression
%type <declaratorAst> declarator
%type <shiftExpressionAst> shift_expression
%type <equalityExpressionAst> equality_expression
%type <jumpStatementAst> jump_statement
%type <structDeclaratorAst> struct_declarator
%type <functionDefinitionAst> function_definition
%type <parameterListAst> parameter_list
%type <enumSpecifierAst> enum_specifier
%type <typeQualifierAst> type_qualifier
%type <enumeratorListAst> enumerator_list
%type <labeledStatementAst> labeled_statement
%type <abstractDeclaratorAst> abstract_declarator
%type <specifierQualifierListAst> specifier_qualifier_list
%type <assignmentOperatorAst> assignment_operator
%type <conditionalExpressionAst> conditional_expression
%type <directAbstractDeclaratorAst> direct_abstract_declarator
%type <expressionAst> expression

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%%

program: 
	translation_unit {
		root = $1;
	}
    ;

storage_class_specifier
    : TYPEDEF {
        $$ = new StorageClassSpecifier1(new Typedef());
    }
    | EXTERN {
        $$ = new StorageClassSpecifier2(new Extern());
    }
    | STATIC {
        $$ = new StorageClassSpecifier3(new Static());
    }
    | AUTO {
        $$ = new StorageClassSpecifier4(new Auto());
    }
    | REGISTER {
        $$ = new StorageClassSpecifier5(new Register());
    }
    ;

expression_statement
    : ';' {
        $$ = new ExpressionStatement1(new SimicolonSingle());
    }
    | expression ';' {
        $$ = new ExpressionStatement2($1, new SimicolonSingle());
    }
    ;

translation_unit
    : external_declaration {
        $$ = new TranslationUnit1($1);
    }
    | translation_unit external_declaration {
        $$ = new TranslationUnit2($1, $2);
    }
    ;

selection_statement
    : IF '(' expression ')' statement {
        $$ = new SelectionStatement1(new If(), new LRound(), $3, new RRound(), $5);
    }
    | IF '(' expression ')' statement ELSE statement {
        $$ = new SelectionStatement2(new If(), new LRound(), $3, new RRound(), $5, new Else(), $7);
    }
    | SWITCH '(' expression ')' statement {
        $$ = new SelectionStatement3(new Switch(), new LRound(), $3, new RRound(), $5);
    }
    ;

unary_expression
    : postfix_expression {
        $$ = new UnaryExpression1($1);
    }
    | INC_OP unary_expression {
        $$ = new UnaryExpression2(new IncOp(), $2);
    }
    | DEC_OP unary_expression {
        $$ = new UnaryExpression3(new DecOp(), $2);
    }
    | unary_operator cast_expression {
        $$ = new UnaryExpression4($1, $2);
    }
    | SIZEOF unary_expression {
        $$ = new UnaryExpression5(new Sizeof(), $2);
    }
    | SIZEOF '(' type_name ')' {
        $$ = new UnaryExpression6(new Sizeof(), new LRound(), $3, new RRound());
    }
    ;

initializer
    : assignment_expression {
        $$ = new Initializer1($1);
    }
    | '{' initializer_list '}' {
        $$ = new Initializer2(new LCurly(), $2, new RCurly());
    }
    | '{' initializer_list ',' '}' {
        $$ = new Initializer3(new LCurly(), $2, new Comma(), new RCurly());
    }
    ;

struct_or_union_specifier
    : struct_or_union IDENTIFIER '{' struct_declaration_list '}' {
        $$ = new StructOrUnionSpecifier1($1, $2, new LCurly(), $4, new RCurly());
    }
    | struct_or_union '{' struct_declaration_list '}' {
        $$ = new StructOrUnionSpecifier2($1, new LCurly(), $3, new RCurly());
    }
    | struct_or_union IDENTIFIER {
        $$ = new StructOrUnionSpecifier3($1, $2);
    }
    ;

exclusive_or_expression
    : and_expression {
        $$ = new ExclusiveOrExpression1($1);
    }
    | exclusive_or_expression '^' and_expression {
        $$ = new ExclusiveOrExpression2($1, new Caret(), $3);
    }
    ;

identifier_list
    : IDENTIFIER {
        $$ = new IdentifierList1($1);
    }
    | identifier_list ',' IDENTIFIER {
        $$ = new IdentifierList2($1, new Comma(), $3);
    }
    ;

init_declarator_list
    : init_declarator {
        $$ = new InitDeclaratorList1($1);
    }
    | init_declarator_list ',' init_declarator {
        $$ = new InitDeclaratorList2($1, new Comma(), $3);
    }
    ;

struct_declaration_list
    : struct_declaration {
        $$ = new StructDeclarationList1($1);
    }
    | struct_declaration_list struct_declaration {
        $$ = new StructDeclarationList2($1, $2);
    }
    ;

enumerator
    : IDENTIFIER {
        $$ = new Enumerator1($1);
    }
    | IDENTIFIER '=' constant_expression {
        $$ = new Enumerator2($1, new Eq(), $3);
    }
    ;

declaration_list
    : declaration {
        $$ = new DeclarationList1($1);
    }
    | declaration_list declaration {
        $$ = new DeclarationList2($1, $2);
    }
    ;

pointer
    : '*' {
        $$ = new Pointer1(new Mul());
    }
    | '*' type_qualifier_list {
        $$ = new Pointer2(new Mul(), $2);
    }
    | '*' pointer {
        $$ = new Pointer3(new Mul(), $2);
    }
    | '*' type_qualifier_list pointer {
        $$ = new Pointer4(new Mul(), $2, $3);
    }
    ;

and_expression
    : equality_expression {
        $$ = new AndExpression1($1);
    }
    | and_expression '&' equality_expression {
        $$ = new AndExpression2($1, new And(), $3);
    }
    ;

external_declaration
    : function_definition {
        $$ = new ExternalDeclaration1($1);
    }
    | declaration {
        $$ = new ExternalDeclaration2($1);
    }
    ;

type_specifier
    : VOID {
        $$ = new TypeSpecifier1(new Void());
    }
    | CHAR {
        $$ = new TypeSpecifier2(new Char());
    }
    | SHORT {
        $$ = new TypeSpecifier3(new Short());
    }
    | INT {
        $$ = new TypeSpecifier4(new Int());
    }
    | LONG {
        $$ = new TypeSpecifier5(new Long());
    }
    | FLOAT {
        $$ = new TypeSpecifier6(new Float());
    }
    | DOUBLE {
        $$ = new TypeSpecifier7(new Double());
    }
    | SIGNED {
        $$ = new TypeSpecifier8(new Signed());
    }
    | UNSIGNED {
        $$ = new TypeSpecifier9(new Unsigned());
    }
    | struct_or_union_specifier {
        $$ = new TypeSpecifier10($1);
    }
    | enum_specifier {
        $$ = new TypeSpecifier11($1);
    }
    | TYPE_NAME_TOKEN {
        $$ = new TypeSpecifier12(new TypeNameToken());
    }
    ;

compound_statement
    : '{' '}' {
        $$ = new CompoundStatement1(new LCurly(), new RCurly());
    }
    | '{' statement_list '}' {
        $$ = new CompoundStatement2(new LCurly(), $2, new RCurly());
    }
    | '{' declaration_list '}' {
        $$ = new CompoundStatement3(new LCurly(), $2, new RCurly());
    }
    | '{' declaration_list statement_list '}' {
        $$ = new CompoundStatement4(new LCurly(), $2, $3, new RCurly());
    }
    ;

inclusive_or_expression
    : exclusive_or_expression {
        $$ = new InclusiveOrExpression1($1);
    }
    | inclusive_or_expression '|' exclusive_or_expression {
        $$ = new InclusiveOrExpression2($1, new Vertical(), $3);
    }
    ;

iteration_statement
    : WHILE '(' expression ')' statement {
        $$ = new IterationStatement1(new While(), new LRound(), $3, new RRound(), $5);
    }
    | DO statement WHILE '(' expression ')' ';' {
        $$ = new IterationStatement2(new Do(), $2, new While(), new LRound(), $5, new RRound(), new SimicolonSingle());
    }
    | FOR '(' expression_statement expression_statement ')' statement {
        $$ = new IterationStatement3(new For(), new LRound(), $3, $4, new RRound(), $6);
    }
    | FOR '(' expression_statement expression_statement expression ')' statement {
        $$ = new IterationStatement4(new For(), new LRound(), $3, $4, $5, new RRound(), $7);
    }
    ;

type_name
    : specifier_qualifier_list {
        $$ = new TypeName1($1);
    }
    | specifier_qualifier_list abstract_declarator {
        $$ = new TypeName2($1, $2);
    }
    ;

postfix_expression
    : primary_expression {
        $$ = new PostfixExpression1($1);
    }
    | postfix_expression '[' expression ']' {
        $$ = new PostfixExpression2($1, new LSquare(), $3, new RSquare());
    }
    | postfix_expression '(' ')' {
        $$ = new PostfixExpression3($1, new LRound(), new RRound());
    }
    | postfix_expression '(' argument_expression_list ')' {
        $$ = new PostfixExpression4($1, new LRound(), $3, new RRound());
    }
    | postfix_expression '.' IDENTIFIER {
        $$ = new PostfixExpression5($1, new Period(), $3);
    }
    | postfix_expression PTR_OP IDENTIFIER {
        $$ = new PostfixExpression6($1, new PtrOp(), $3);
    }
    | postfix_expression INC_OP {
        $$ = new PostfixExpression7($1, new IncOp());
    }
    | postfix_expression DEC_OP {
        $$ = new PostfixExpression8($1, new DecOp());
    }
    ;

additive_expression
    : multiplicative_expression {
        $$ = new AdditiveExpression1($1);
    }
    | additive_expression '+' multiplicative_expression {
        $$ = new AdditiveExpression2($1, new Add(), $3);
    }
    | additive_expression '-' multiplicative_expression {
        $$ = new AdditiveExpression3($1, new Sub(), $3);
    }
    ;

statement
    : labeled_statement {
        $$ = new Statement1($1);
    }
    | compound_statement {
        $$ = new Statement2($1);
    }
    | expression_statement {
        $$ = new Statement3($1);
    }
    | selection_statement {
        $$ = new Statement4($1);
    }
    | iteration_statement {
        $$ = new Statement5($1);
    }
    | jump_statement {
        $$ = new Statement6($1);
    }
    ;

unary_operator
    : '&' {
        $$ = new UnaryOperator1(new And());
    }
    | '*' {
        $$ = new UnaryOperator2(new Mul());
    }
    | '+' {
        $$ = new UnaryOperator3(new Add());
    }
    | '-' {
        $$ = new UnaryOperator4(new Sub());
    }
    | '~' {
        $$ = new UnaryOperator5(new Tilde());
    }
    | '!' {
        $$ = new UnaryOperator6(new Exclamation());
    }
    ;

cast_expression
    : unary_expression {
        $$ = new CastExpression1($1);
    }
    | '(' type_name ')' cast_expression {
        $$ = new CastExpression2(new LRound(), $2, new RRound(), $4);
    }
    ;

initializer_list
    : initializer {
        $$ = new InitializerList1($1);
    }
    | initializer_list ',' initializer {
        $$ = new InitializerList2($1, new Comma(), $3);
    }
    ;

struct_declarator_list
    : struct_declarator {
        $$ = new StructDeclaratorList1($1);
    }
    | struct_declarator_list ',' struct_declarator {
        $$ = new StructDeclaratorList2($1, new Comma(), $3);
    }
    ;

logical_or_expression
    : logical_and_expression {
        $$ = new LogicalOrExpression1($1);
    }
    | logical_or_expression OR_OP logical_and_expression {
        $$ = new LogicalOrExpression2($1, new OrOp(), $3);
    }
    ;

constant_expression
    : conditional_expression {
        $$ = new ConstantExpression1($1);
    }
    ;

relational_expression
    : shift_expression {
        $$ = new RelationalExpression1($1);
    }
    | relational_expression '<' shift_expression {
        $$ = new RelationalExpression2($1, new LAngle(), $3);
    }
    | relational_expression '>' shift_expression {
        $$ = new RelationalExpression3($1, new RAngle(), $3);
    }
    | relational_expression LE_OP shift_expression {
        $$ = new RelationalExpression4($1, new LeOp(), $3);
    }
    | relational_expression GE_OP shift_expression {
        $$ = new RelationalExpression5($1, new GeOp(), $3);
    }
    ;

struct_or_union
    : STRUCT {
        $$ = new StructOrUnion1(new Struct());
    }
    | UNION {
        $$ = new StructOrUnion2(new Union());
    }
    ;

type_qualifier_list
    : type_qualifier {
        $$ = new TypeQualifierList1($1);
    }
    | type_qualifier_list type_qualifier {
        $$ = new TypeQualifierList2($1, $2);
    }
    ;

struct_declaration
    : specifier_qualifier_list struct_declarator_list ';' {
        $$ = new StructDeclaration1($1, $2, new SimicolonSingle());
    }
    ;

assignment_expression
    : conditional_expression {
        $$ = new AssignmentExpression1($1);
    }
    | unary_expression assignment_operator assignment_expression {
        $$ = new AssignmentExpression2($1, $2, $3);
    }
    ;

parameter_type_list
    : parameter_list {
        $$ = new ParameterTypeList1($1);
    }
    | parameter_list ',' ELLIPSIS {
        $$ = new ParameterTypeList2($1, new Comma(), new Ellipsis());
    }
    ;

parameter_declaration
    : declaration_specifiers declarator {
        $$ = new ParameterDeclaration1($1, $2);
    }
    | declaration_specifiers abstract_declarator {
        $$ = new ParameterDeclaration2($1, $2);
    }
    | declaration_specifiers {
        $$ = new ParameterDeclaration3($1);
    }
    ;

multiplicative_expression
    : cast_expression {
        $$ = new MultiplicativeExpression1($1);
    }
    | multiplicative_expression '*' cast_expression {
        $$ = new MultiplicativeExpression2($1, new Mul(), $3);
    }
    | multiplicative_expression '/' cast_expression {
        $$ = new MultiplicativeExpression3($1, new Div(), $3);
    }
    | multiplicative_expression '%' cast_expression {
        $$ = new MultiplicativeExpression4($1, new Mod(), $3);
    }
    ;

init_declarator
    : declarator {
        $$ = new InitDeclarator1($1);
    }
    | declarator '=' initializer {
        $$ = new InitDeclarator2($1, new Eq(), $3);
    }
    ;

argument_expression_list
    : assignment_expression {
        $$ = new ArgumentExpressionList1($1);
    }
    | argument_expression_list ',' assignment_expression {
        $$ = new ArgumentExpressionList2($1, new Comma(), $3);
    }
    ;

statement_list
    : statement {
        $$ = new StatementList1($1);
    }
    | statement_list statement {
        $$ = new StatementList2($1, $2);
    }
    ;

primary_expression
    : IDENTIFIER {
        $$ = new PrimaryExpression1($1);
    }
    | CONSTANT {
        $$ = new PrimaryExpression2($1);
    }
    | STRING_LITERAL {
        $$ = new PrimaryExpression3($1);
    }
    | '(' expression ')' {
        $$ = new PrimaryExpression4(new LRound(), $2, new RRound());
    }
    ;

declaration_specifiers
    : storage_class_specifier {
        $$ = new DeclarationSpecifiers1($1);
    }
    | storage_class_specifier declaration_specifiers {
        $$ = new DeclarationSpecifiers2($1, $2);
    }
    | type_specifier {
        $$ = new DeclarationSpecifiers3($1);
    }
    | type_specifier declaration_specifiers {
        $$ = new DeclarationSpecifiers4($1, $2);
    }
    | type_qualifier {
        $$ = new DeclarationSpecifiers5($1);
    }
    | type_qualifier declaration_specifiers {
        $$ = new DeclarationSpecifiers6($1, $2);
    }
    ;

declaration
    : declaration_specifiers ';' {
        $$ = new Declaration1($1, new SimicolonSingle());
    }
    | declaration_specifiers init_declarator_list ';' {
        $$ = new Declaration2($1, $2, new SimicolonSingle());
    }
    ;

direct_declarator
    : IDENTIFIER {
        $$ = new DirectDeclarator1($1);
    }
    | '(' declarator ')' {
        $$ = new DirectDeclarator2(new LRound(), $2, new RRound());
    }
    | direct_declarator '[' constant_expression ']' {
        $$ = new DirectDeclarator3($1, new LSquare(), $3, new RSquare());
    }
    | direct_declarator '[' ']' {
        $$ = new DirectDeclarator4($1, new LSquare(), new RSquare());
    }
    | direct_declarator '(' parameter_type_list ')' {
        $$ = new DirectDeclarator5($1, new LRound(), $3, new RRound());
    }
    | direct_declarator '(' identifier_list ')' {
        $$ = new DirectDeclarator6($1, new LRound(), $3, new RRound());
    }
    | direct_declarator '(' ')' {
        $$ = new DirectDeclarator7($1, new LRound(), new RRound());
    }
    ;

logical_and_expression
    : inclusive_or_expression {
        $$ = new LogicalAndExpression1($1);
    }
    | logical_and_expression AND_OP inclusive_or_expression {
        $$ = new LogicalAndExpression2($1, new AndOp(), $3);
    }
    ;

declarator
    : pointer direct_declarator {
        $$ = new Declarator1($1, $2);
    }
    | direct_declarator {
        $$ = new Declarator2($1);
    }
    ;

shift_expression
    : additive_expression {
        $$ = new ShiftExpression1($1);
    }
    | shift_expression LEFT_OP additive_expression {
        $$ = new ShiftExpression2($1, new LeftOp(), $3);
    }
    | shift_expression RIGHT_OP additive_expression {
        $$ = new ShiftExpression3($1, new RightOp(), $3);
    }
    ;

equality_expression
    : relational_expression {
        $$ = new EqualityExpression1($1);
    }
    | equality_expression EQ_OP relational_expression {
        $$ = new EqualityExpression2($1, new EqOp(), $3);
    }
    | equality_expression NE_OP relational_expression {
        $$ = new EqualityExpression3($1, new NeOp(), $3);
    }
    ;

jump_statement
    : GOTO IDENTIFIER ';' {
        $$ = new JumpStatement1(new Goto(), $2, new SimicolonSingle());
    }
    | CONTINUE ';' {
        $$ = new JumpStatement2(new Continue(), new SimicolonSingle());
    }
    | BREAK ';' {
        $$ = new JumpStatement3(new Break(), new SimicolonSingle());
    }
    | RETURN ';' {
        $$ = new JumpStatement4(new Return(), new SimicolonSingle());
    }
    | RETURN expression ';' {
        $$ = new JumpStatement5(new Return(), $2, new SimicolonSingle());
    }
    ;

struct_declarator
    : declarator {
        $$ = new StructDeclarator1($1);
    }
    | ':' constant_expression {
        $$ = new StructDeclarator2(new Colon(), $2);
    }
    | declarator ':' constant_expression {
        $$ = new StructDeclarator3($1, new Colon(), $3);
    }
    ;

function_definition
    : declaration_specifiers declarator declaration_list compound_statement {
        $$ = new FunctionDefinition1($1, $2, $3, $4);
    }
    | declaration_specifiers declarator compound_statement {
        $$ = new FunctionDefinition2($1, $2, $3);
    }
    | declarator declaration_list compound_statement {
        $$ = new FunctionDefinition3($1, $2, $3);
    }
    | declarator compound_statement {
        $$ = new FunctionDefinition4($1, $2);
    }
    ;

parameter_list
    : parameter_declaration {
        $$ = new ParameterList1($1);
    }
    | parameter_list ',' parameter_declaration {
        $$ = new ParameterList2($1, new Comma(), $3);
    }
    ;

enum_specifier
    : ENUM '{' enumerator_list '}' {
        $$ = new EnumSpecifier1(new Enum(), new LCurly(), $3, new RCurly());
    }
    | ENUM IDENTIFIER '{' enumerator_list '}' {
        $$ = new EnumSpecifier2(new Enum(), $2, new LCurly(), $4, new RCurly());
    }
    | ENUM IDENTIFIER {
        $$ = new EnumSpecifier3(new Enum(), $2);
    }
    ;

type_qualifier
    : CONST {
        $$ = new TypeQualifier1(new Const());
    }
    | VOLATILE {
        $$ = new TypeQualifier2(new Volatile());
    }
    ;

enumerator_list
    : enumerator {
        $$ = new EnumeratorList1($1);
    }
    | enumerator_list ',' enumerator {
        $$ = new EnumeratorList2($1, new Comma(), $3);
    }
    ;

labeled_statement
    : IDENTIFIER ':' statement {
        $$ = new LabeledStatement1($1, new Colon(), $3);
    }
    | CASE constant_expression ':' statement {
        $$ = new LabeledStatement2(new Case(), $2, new Colon(), $4);
    }
    | DEFAULT ':' statement {
        $$ = new LabeledStatement3(new Default(), new Colon(), $3);
    }
    ;

abstract_declarator
    : pointer {
        $$ = new AbstractDeclarator1($1);
    }
    | direct_abstract_declarator {
        $$ = new AbstractDeclarator2($1);
    }
    | pointer direct_abstract_declarator {
        $$ = new AbstractDeclarator3($1, $2);
    }
    ;

specifier_qualifier_list
    : type_specifier specifier_qualifier_list {
        $$ = new SpecifierQualifierList1($1, $2);
    }
    | type_specifier {
        $$ = new SpecifierQualifierList2($1);
    }
    | type_qualifier specifier_qualifier_list {
        $$ = new SpecifierQualifierList3($1, $2);
    }
    | type_qualifier {
        $$ = new SpecifierQualifierList4($1);
    }
    ;

assignment_operator
    : '=' {
        $$ = new AssignmentOperator1(new Eq());
    }
    | MUL_ASSIGN {
        $$ = new AssignmentOperator2(new MulAssign());
    }
    | DIV_ASSIGN {
        $$ = new AssignmentOperator3(new DivAssign());
    }
    | MOD_ASSIGN {
        $$ = new AssignmentOperator4(new ModAssign());
    }
    | ADD_ASSIGN {
        $$ = new AssignmentOperator5(new AddAssign());
    }
    | SUB_ASSIGN {
        $$ = new AssignmentOperator6(new SubAssign());
    }
    | LEFT_ASSIGN {
        $$ = new AssignmentOperator7(new LeftAssign());
    }
    | RIGHT_ASSIGN {
        $$ = new AssignmentOperator8(new RightAssign());
    }
    | AND_ASSIGN {
        $$ = new AssignmentOperator9(new AndAssign());
    }
    | XOR_ASSIGN {
        $$ = new AssignmentOperator10(new XorAssign());
    }
    | OR_ASSIGN {
        $$ = new AssignmentOperator11(new OrAssign());
    }
    ;

conditional_expression
    : logical_or_expression {
        $$ = new ConditionalExpression1($1);
    }
    | logical_or_expression '?' expression ':' conditional_expression {
        $$ = new ConditionalExpression2($1, new Question(), $3, new Colon(), $5);
    }
    ;

direct_abstract_declarator
    : '(' abstract_declarator ')' {
        $$ = new DirectAbstractDeclarator1(new LRound(), $2, new RRound());
    }
    | '[' ']' {
        $$ = new DirectAbstractDeclarator2(new LSquare(), new RSquare());
    }
    | '[' constant_expression ']' {
        $$ = new DirectAbstractDeclarator3(new LSquare(), $2, new RSquare());
    }
    | direct_abstract_declarator '[' ']' {
        $$ = new DirectAbstractDeclarator4($1, new LSquare(), new RSquare());
    }
    | direct_abstract_declarator '[' constant_expression ']' {
        $$ = new DirectAbstractDeclarator5($1, new LSquare(), $3, new RSquare());
    }
    | '(' ')' {
        $$ = new DirectAbstractDeclarator6(new LRound(), new RRound());
    }
    | '(' parameter_type_list ')' {
        $$ = new DirectAbstractDeclarator7(new LRound(), $2, new RRound());
    }
    | direct_abstract_declarator '(' ')' {
        $$ = new DirectAbstractDeclarator8($1, new LRound(), new RRound());
    }
    | direct_abstract_declarator '(' parameter_type_list ')' {
        $$ = new DirectAbstractDeclarator9($1, new LRound(), $3, new RRound());
    }
    ;

expression
    : assignment_expression {
        $$ = new Expression1($1);
    }
    | expression ',' assignment_expression {
        $$ = new Expression2($1, new Comma(), $3);
    }
    ;


%%

void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}


int main(int argc,char* argv[]) {

	yyin = fopen(argv[1],"r");
	
	//freopen("output/output.txt","w", stdout);
	yyparse();

    root -> Dump(0);
    delete root;
	fclose(yyin);
	return 0;
}
