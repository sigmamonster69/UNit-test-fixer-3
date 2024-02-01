#include <gtest/gtest.h>

TEST(MultiplyBy10Test, MultiplyBy10) {
  // Test data
  int number = 5;
  int expectedResult = 50;

  // Test function
  int result = multiplyBy10(number);

  // Assertion
  EXPECT_EQ(result, expectedResult);
}

int multiplyBy10(int number) {
  return number * 10;
}


    // Call the function and check the result
TEST_F(DeathTest, MultiplyBy10) {
    int input = 5;
    int expectedOutput = 50;

    int result = multiplyBy10(input);

    EXPECT_EQ(expectedOutput, result);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);

    // Run the tests
    int testResult = RUN_ALL_TESTS();

    // User input and comparison with expected output
    int userInput;
    std::cout << "Enter a number: ";
    std::cin >> userInput;

    int result = multiplyBy10(userInput);
    int expectedOutput = userInput * 10;

    if (result == expectedOutput) {
        std::cout << "Pass" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }

    return testResult; // Return the test result
}

