#include "ast/ast.h"
#include <iostream>

// declaration_list -> declaration
// (DeclarationList -> Declaration)
IRValuePtr DeclarationList1::GenerateIR(Context& context) {
    // TODO: implement me!
    if (this->declarationType == DeclarationType::UNKNOWN) {
        context.error("DeclarationList.declarationType = UNKNOWN!!!!");
    } else if (this->declarationType == DeclarationType::VARIABLE) {
        // variable declaration
        this->declarationAst1->declarationType = DeclarationType::VARIABLE;
        this->declarationAst1->GenerateIR(context);
    } else {
        // function declaration
    }
    return nullptr;
}

// declaration_list -> declaration_list declaration
// (DeclarationList -> DeclarationList Declaration)
IRValuePtr DeclarationList2::GenerateIR(Context& context) {
    // TODO: implement me!
    if (this->declarationType == DeclarationType::UNKNOWN) {
        context.error("DeclarationList.declarationType = UNKNOWN!!!!");
    }
    std::cerr << "DeclarationList Not implemented!" << std::endl;
    return nullptr;
}

