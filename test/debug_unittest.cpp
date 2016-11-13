#include <gtest/gtest.h>
#include "../include/debug.h"

class DebugTest : public ::testing::Test
{
    protected:
        Debug& obj1 = Debug::instance();
        Debug& obj2 = Debug::instance();
        Debug& obj3 = Debug::instance();
};

TEST_F(DebugTest, Set_obj1_Get_obj1)
{
    obj1.set(20);
    ASSERT_EQ(20,obj1.get("main"));
}

TEST_F(DebugTest, Set_obj2_Get_obj2)
{
    obj2.set(1);
    ASSERT_EQ(1,obj2.get("main"));
}

TEST_F(DebugTest, Set_obj1_get_obj3)
{
    obj1.set(75);
    ASSERT_EQ(75,obj3.get("main"));
}

TEST_F(DebugTest, Set_obj2_Get_obj1)
{
    obj3.set(3);
    ASSERT_EQ(3,obj1.get("main"));
}
