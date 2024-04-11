#include <iostream>
#include "tool.h"

Tool::Tool() {
    // Constructor implementation
}

void Tool::useTool() const {
    std::cout << "Using the tool!\n" << std::endl;
}

int Tool::tool_num() const {
    return 404;
}