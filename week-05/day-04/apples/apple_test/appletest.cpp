#include <gtest/gtest.h>
#include "apple.h"

TEST(apple_check, test_apple){
    EXPECT_EQ(getApple(), "apple");
}

std::vector<int> testVector = {1,2,3,4,5};
std::vector<int> testVectorEmpty = {};
std::vector<int> testVectorNegative = {-1, -2, -3, -4, -5};
std::vector<int> testVectorOne = {1};


TEST(sum_check, test_sum){
    ASSERT_EQ(sum(testVector), 15);
}

TEST(sum_check, test_sum_empty){
    ASSERT_EQ(sum(testVectorEmpty), 0);
}

TEST(sum_check, test_sum_negative){
    ASSERT_EQ(sum(testVectorNegative), -15);
}

TEST(sum_check, test_sum_one){
    ASSERT_EQ(sum(testVectorOne), 1);
}