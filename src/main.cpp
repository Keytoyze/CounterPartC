#include <stdio.h>
#include "IR/context.h"
#include "ast/basic_ast.h"
#include "ast/render.h"
#include <fstream>

extern FILE *yyin;
extern int yyparse(void);
extern BasicAST* root;

int main(int argc,char* argv[]) {

	yyin = fopen(argv[1],"r");
	yyparse();

    std::cout << "Dump: " << std::endl;
    TreeRender::init();
    root->Dump(0);
    std::ofstream fout("AST.html");
    fout << TreeRender::render();

    Context context;
    std::cout << "Generate IR: " << std::endl;
    root->GenerateIR(context);

    std::cout << "IR: " << std::endl;
    std::cout << context.ir.getCode();

    delete root;
	fclose(yyin);
	return 0;
}