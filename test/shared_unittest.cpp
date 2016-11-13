#include <gtest/gtest.h>
#include "../include/shared.h"

class SharedTest : public ::testing::Test
{
    protected:
        sharedclass sh;
};

TEST_F(SharedTest, add)
{
    ASSERT_EQ(20,sh.add(15,5));
}

TEST_F(SharedTest, subtract)
{
    ASSERT_EQ(20,sh.subtract(50,30));
}

TEST_F(SharedTest, multiply)
{
    ASSERT_EQ(75,sh.multiply(15,5));
}

TEST_F(SharedTest, divide)
{
    ASSERT_EQ(3,sh.divide(15,5));
}
