#include <myStaticLib/myStaticLib.h>
#include <myDynamicLib/myDynamicLib.h>

#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest, MoreAssertions)
{
    auto o = MyProject::MyStaticClass();
    EXPECT_EQ(o.getMessage(), "hello static lib");
}