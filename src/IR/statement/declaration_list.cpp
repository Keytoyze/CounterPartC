#include "ast/ast.h"
#include <iostream>

void processDeclaration(Declaration* declaration, DeclarationType declarationType, Context &context) {
    if (declarationType == DeclarationType::UNKNOWN) {
        context.error("DeclarationList.declarationType = UNKNOWN!!!!");
    } 
    // declaration->declarationType = DeclarationType::VARIABLE;
    declaration->GenerateIR(context);
}

// declaration_list -> declaration
// (DeclarationList -> Declaration)
IRValuePtr DeclarationList1::GenerateIR(Context& context) {
    this->declarationAst1->declarationType = this->declarationType;
    processDeclaration(this->declarationAst1, this->declarationType, context);
    return nullptr;
}

// declaration_list -> declaration_list declaration
// (DeclarationList -> DeclarationList Declaration)
IRValuePtr DeclarationList2::GenerateIR(Context& context) {
    if (this->declarationType == DeclarationType::UNKNOWN) {
        context.error("DeclarationList.declarationType = UNKNOWN!!!!");
    }
    this->declarationListAst1->declarationType = this->declarationType;
    this->declarationAst2->declarationType = this->declarationType;
    this->declarationListAst1->GenerateIR(context);

    processDeclaration(this->declarationAst2, this->declarationType, context);

    return nullptr;
}

