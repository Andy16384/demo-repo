#include "tool.h"
#include <iostream>

using namespace std;

int main() {
    Tool myTool;  // Creating an instance of the Tool class

    // Using the tool
    myTool.useTool();
    cout << myTool.tool_num() << endl;

    return 0;
}
