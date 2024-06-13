#include "gtest/gtest.h"
#include "divider.hpp"

TEST(DividerTest, DivideNumbers) {
    Divider divider;
    EXPECT_EQ(2.0, divider.divideNumbers(6.0, 3.0)); // Проверка деления двух чисел
}

TEST(DividerTest, DivideByZero) {
    Divider divider;
    EXPECT_THROW(divider.divideNumbers(5.0, 0.0), std::invalid_argument); // Проверка деления на ноль
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
