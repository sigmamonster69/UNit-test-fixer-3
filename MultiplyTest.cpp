#include "gtest/gtest.h"

// The function to be tested
int multiplyBy10(int input) {
    return input * 10;
}

// Test case for the multiplyBy10 function
TEST(MultiplyBy10Test, PositiveInput) {
    // Input
    int input = 5;

    // Expected output
    int expectedOutput = 50;

    // Call the function and check the result
    EXPECT_EQ(expectedOutput, multiplyBy10(input));
}

// Test case for the multiplyBy10 function with zero input
TEST(MultiplyBy10Test, ZeroInput) {
    // Input
    int input = 0;

    // Expected output
    int expectedOutput = 0;

    // Call the function and check the result
    EXPECT_EQ(expectedOutput, multiplyBy10(input));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

