#include <gtest/gtest.h>
#include "simple_math.h"

TEST(SimpleMathTest, PositiveNumbers) 
{
    ASSERT_EQ(4, add(2, 2));
    ASSERT_EQ(100, add(50, 50));
}

TEST(SimpleMathTest, NegativeNumbers) 
{
    ASSERT_EQ(-4, add(-2, -2));
    ASSERT_EQ(0, add(-2, 2));
}

TEST(SimpleMathTest, Zero) 
{
    ASSERT_EQ(0, add(0, 0));
    ASSERT_EQ(5, add(5, 0));
    ASSERT_EQ(5, add(0, 5));
}

TEST(SimpleMathTest, Subtraction) 
{
    ASSERT_EQ(0, subtract(2, 2));
    ASSERT_EQ(10, subtract(20, 10));
}

TEST(SimpleMathTest, IsEven) 
{
    ASSERT_TRUE(is_even(4));
    ASSERT_FALSE(is_even(5));
}
