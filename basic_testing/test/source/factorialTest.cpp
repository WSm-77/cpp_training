#include <gtest/gtest.h>
#include "factorial.hpp"

TEST(factorialTest, firstTest){
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(4), 24);
    EXPECT_EQ(factorial(5), 120);
}

TEST(factorialTest, secondTest){
    EXPECT_GT(factorial(4), factorial(3));
    EXPECT_TRUE(factorial(5) > factorial(3));
    EXPECT_LE(factorial(6), factorial(6));
}