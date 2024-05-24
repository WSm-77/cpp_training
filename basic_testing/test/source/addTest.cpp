#include <gtest/gtest.h>
#include "add.hpp"

TEST(addFunction, firstTest){
    EXPECT_EQ(add(3,4), 7);
    EXPECT_EQ(add(3,3), 6);
    EXPECT_EQ(add(3,9), 12);
}