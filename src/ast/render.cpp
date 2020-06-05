#include "ast/render.h"

std::vector<int> TreeRender::nodeStack;
int TreeRender::id;
std::stringstream TreeRender::mermaidStream;

void TreeRender::init() {
    nodeStack.clear();
    id = 0;
    mermaidStream.clear();
    mermaidStream << "<!DOCTYPE html><html><head>"
        << "<script src=\"https://unpkg.com/mermaid@8.5.1/dist/mermaid.min.js\"></script>"
        << "</head><body><div class=\"AST\">\n"
        << "graph TD\n";
}

void TreeRender::push(const char* node, bool isTerminal) {
    int currentId = id++;
    char left = isTerminal ? '(' : '[';
    char right = isTerminal ? ')' : ']';
    if (nodeStack.size() == 0) {
        mermaidStream << currentId << left << node << right << std::endl;
    } else {
        mermaidStream << nodeStack.back() << " --> " << currentId << left << node << right << std::endl;
    }
    if (!isTerminal) {
        nodeStack.push_back(currentId);
    } else {
        mermaidStream << "style " << currentId << " fill:#f9f" << std::endl;
    }
}

void TreeRender::pop() {
    nodeStack.pop_back();
}

std::string TreeRender::render() {
    mermaidStream << "</div><script>mermaid.init({noteMargin: 10}, \".AST\");</script></body></html>";
    return mermaidStream.str();
}