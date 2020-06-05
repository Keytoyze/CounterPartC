#ifndef _RENDER_H_
#define _RENDER_H_

#include <string>
#include <vector>
#include <sstream>

class TreeRender {
public:
    static void init();
    static void push(const char* node, bool isTerminal = false);
    static void pop();
    static std::string render();
private:
    static std::vector<int> nodeStack;
    static int id;
    static std::stringstream mermaidStream;
};

#endif // _RENDER_H_