#include "ast/ast.h"
#include <iostream>

// function_definition -> declaration_specifiers declarator declaration_list compound_statement
// (FunctionDefinition -> DeclarationSpecifiers Declarator DeclarationList CompoundStatement)
IRValuePtr FunctionDefinition1::GenerateIR(Context& context) {
    // TODO: implement me!
//    auto* type_spe
    std::cerr << "FunctionDefinition1 Not implemented!" << std::endl;
    return nullptr;
}

// function_definition -> declaration_specifiers declarator compound_statement
// (FunctionDefinition -> DeclarationSpecifiers Declarator CompoundStatement)
IRValuePtr FunctionDefinition2::GenerateIR(Context& context) {
    // TODO: implement me!
    this->declarationSpecifiersAst1->GenerateIR(context);
    auto declarator = this->declaratorAst2->GenerateIR(context);
    assert(declarator != nullptr);
    if (declarator->type == TYPE_IDENTIFIER) {
        std::cout << "Function def: " << declarator->content << std::endl;
    }
    this->compoundStatementAst3->GenerateIR(context);
    std::cerr << "FunctionDefinition2 Not implemented!" << std::endl;
    return nullptr;
}

// function_definition -> declarator declaration_list compound_statement
// (FunctionDefinition -> Declarator DeclarationList CompoundStatement)
IRValuePtr FunctionDefinition3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "FunctionDefinition3 Not implemented!" << std::endl;
    return nullptr;
}

// function_definition -> declarator compound_statement
// (FunctionDefinition -> Declarator CompoundStatement)
IRValuePtr FunctionDefinition4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "FunctionDefinition4 Not implemented!" << std::endl;
    return nullptr;
}

