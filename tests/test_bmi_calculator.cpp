#include <gtest/gtest.h>
#include "../src/bmi_calculator.cpp"

TEST(BMICalculatorTest, Underweight) {
    EXPECT_EQ(calculate_bmi_category(16.0), "You are underweight.");
}

TEST(BMICalculatorTest, NormalWeight) {
    EXPECT_EQ(calculate_bmi_category(21.0), "You have a normal weight.");
}

TEST(BMICalculatorTest, Overweight) {
    EXPECT_EQ(calculate_bmi_category(27.0), "You are overweight.");
}

TEST(BMICalculatorTest, Obese) {
    EXPECT_EQ(calculate_bmi_category(32.0), "You are obese.");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
