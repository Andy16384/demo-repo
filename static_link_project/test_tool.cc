#include "tool.h" // Include the header file containing your function declaration
#include "../extern/googletest/googletest/include/gtest/gtest.h"

TEST(ToolTest, TestPrintMessage) {
	// Arrange
	testing::internal::CaptureStdout(); // Redirect stdout for capturing output
		   
        // Act
	UseTool(); // Call your function
	
       	// Assert
	std::string output = testing::internal::GetCapturedStdout(); // Get the captured output
	ASSERT_EQ(output, "Using the tool!"); // Assert that the output matches expected
}
