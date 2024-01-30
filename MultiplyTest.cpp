#include "gtest/gtest.h"
#include "your_program_file_name.h" // Replace with the actual file name

TEST(MultiplyBy10Test, PositiveInput) {
    EXPECT_EQ(50, multiplyBy10(5));
}

TEST(MultiplyBy10Test, ZeroInput) {
    EXPECT_EQ(0, multiplyBy10(0));
    // Add more test cases as needed
}
