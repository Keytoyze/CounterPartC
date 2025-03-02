#include "ast/ast.h"
#include <iostream>

// compound_statement -> '{' '}'
// (CompoundStatement -> LCurly RCurly)
IRValuePtr CompoundStatement1::GenerateIR(Context& context) {
    return nullptr;
}

// compound_statement -> '{' statement_list '}'
// (CompoundStatement -> LCurly StatementList RCurly)
IRValuePtr CompoundStatement2::GenerateIR(Context& context) {
    this->statementListAst2->GenerateIR(context);
    return nullptr;
}

// compound_statement -> '{' declaration_list '}'
// (CompoundStatement -> LCurly DeclarationList RCurly)
IRValuePtr CompoundStatement3::GenerateIR(Context& context) {
    this->declarationListAst2->declarationType = DeclarationType::VARIABLE;
    this->declarationListAst2->GenerateIR(context);
    return nullptr;
}

// compound_statement -> '{' declaration_list statement_list '}'
// (CompoundStatement -> LCurly DeclarationList StatementList RCurly)
IRValuePtr CompoundStatement4::GenerateIR(Context& context) {
    // try to set to variable declaration
    // since function declaration is not allowed in {}
    this->declarationListAst2->declarationType = DeclarationType::VARIABLE;
    this->declarationListAst2->GenerateIR(context);
    this->statementListAst3->GenerateIR(context);
    return nullptr;
}

