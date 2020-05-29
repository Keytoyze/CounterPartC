#include "ast/ast.h"
#include <iostream>

// statement_list -> statement
// (StatementList -> Statement)
IRValuePtr StatementList1::GenerateIR(Context& context) {
    this->statementAst1->GenerateIR(context);
    return nullptr;
}

// statement_list -> statement_list statement
// (StatementList -> StatementList Statement)
IRValuePtr StatementList2::GenerateIR(Context& context) {
    this->statementListAst1->GenerateIR(context);
    this->statementAst2->GenerateIR(context);
    return nullptr;
}

