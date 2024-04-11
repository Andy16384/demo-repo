#include "gtest/gtest.h"
#include "tool.h"

class ToolTest : public ::testing::Test {
protected:
    Tool tool;
};

TEST_F(ToolTest, UseToolTest) {
    // Redirect std::cout to a stringstream to capture the output
    std::stringstream capturedOutput;
    std::streambuf* originalOutput = std::cout.rdbuf(capturedOutput.rdbuf());

    // Call the function
    tool.useTool();

    // Restore std::cout
    std::cout.rdbuf(originalOutput);

    // Check the output
    EXPECT_EQ(capturedOutput.str(), "Using the tool!\n\n");
}

TEST_F(ToolTest, TestFunctionality) {
    Tool mytool;
    int result = mytool.tool_num();
    EXPECT_EQ(result, 404);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// =========================================================
