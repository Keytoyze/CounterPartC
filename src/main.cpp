#include <stdio.h>
#include "IR/context.h"
#include "ast/basic_ast.h"
#include "ast/render.h"
#include "target.h"
#include "IR/CodeOptimization.h"
#include <fstream>
#include <cstring>

extern FILE *yyin;

extern int yyparse(void);

extern BasicAST *root;

struct CompileParam {
    std::string inputFile;
    std::string outputFile;
    std::string astFile;
    std::string irFile;
    unsigned long optimizationFlag;
    // TODO: optimize
};

void errorArgs(std::string errorMsg) {
    std::cout << errorMsg << std::endl;
    std::cout << "usage: cpc input.c [-Ocf] [-Ouc] [-ast ast_path.html] [-ir ir_path.txt] [-o a.out]" << std::endl;
}

bool checkItem(int index, int num, const char *itemName) {
    if (index == num) {
        errorArgs(std::string("error: missing filename after '") + itemName + "'");
        return false;
    }
    return true;
}

bool parseArgs(int argc, char *argv[], CompileParam &param) {
    if (argc == 1) {
        errorArgs("fatal error: no input files");
        return false;
    }
    param.inputFile = argv[1];
    param.astFile = std::string(argv[1]) + ".html";
    param.irFile = std::string(argv[1]) + ".txt";
    param.outputFile = std::string(argv[1]) + ".s";
    int i = 2;
    while (i < argc) {
        if (!strcmp(argv[i], "-ast")) {
            if (!checkItem(++i, argc, "-ast")) {
                return false;
            }
            param.astFile = argv[i];
        } else if (!strcmp(argv[i], "-ir")) {
            if (!checkItem(++i, argc, "-ir")) {
                return false;
            }
            param.irFile = argv[i];
        } else if (!strcmp(argv[i], "-o")) {
            if (!checkItem(++i, argc, "-o")) {
                return false;
            }
            param.outputFile = argv[i];
        } else if (!strcmp(argv[i], "-Ocf")) {
            param.optimizationFlag |= CONSTANT_FOLDING_FLAG;
        } else if (!strcmp(argv[i], "-Ouc")) {
            param.optimizationFlag |= UNREACHABLE_CODE_FLAG;
        } else {
            errorArgs(std::string("error: unrecognized command line option '") + argv[i] + "'");
            return false;
        }
        i++;
    }
    return true;
}

int main(int argc, char *argv[]) {

    CompileParam param;
    if (!parseArgs(argc, argv, param)) {
        return -1;
    }

    yyin = fopen(param.inputFile.c_str(), "r");
    yyparse();

    TreeRender::init();
    root->Dump(0);
    std::ofstream astOut(param.astFile.c_str());
    astOut << TreeRender::render();
    std::cout << "====> output AST file: " << param.astFile << std::endl;

    Context context;
    // set optimization flags
    context.setOptimizationFlags(param.optimizationFlag);
    root->GenerateIR(context);
    std::ofstream irOut(param.irFile.c_str());
    irOut << context.ir.getCode();
    std::cout << "====> output IR file: " << param.irFile << std::endl;

    std::stringstream command;
    command << "python " << COMPILER_PATH << " \"" << param.irFile << "\" \"" << param.outputFile << "\"";
    system(command.str().c_str());

    std::cout << "====> output ASM file: " << param.outputFile << std::endl;

    delete root;
    fclose(yyin);
    return 0;
}