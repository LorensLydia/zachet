#include <gtest/gtest.h>

#include "divider.h"

TEST(DividerTest, DividePositiveNumbers) {
    Divider divider;
    EXPECT_EQ(2.5, divider.divideNumbers(5.0, 2.0));
}

TEST(DividerTest, DivideByZero) {
    Divider divider;
    EXPECT_EQ(0, divider.divideNumbers(10.0, 0.0));
}

TEST(DividerTest, DivideNegativeNumbers) {
    Divider divider;
    EXPECT_EQ(-3, divider.divideNumbers(15.0, -5.0));
}
