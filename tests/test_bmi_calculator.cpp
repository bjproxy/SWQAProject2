#include <gtest/gtest.h>
#include <cmath>

#include "bmi_calculator.cpp"

TEST(BMICalculator, Underweight)
{
    // Test for underweight
    float weight = 100;
    float height = 72;
    float bmi = calculate_bmi(weight, height);
    float expected_bmi = roundf((weight / (height * height)) * 703 * 10) / 10;
    EXPECT_EQ(expected_bmi, bmi);
    EXPECT_EQ("underweight", get_bmi_category(bmi));
}

TEST(BMICalculator, NormalWeight)
{
    // Test for normal weight
    float weight = 150;
    float height = 68;
    float bmi = calculate_bmi(weight, height);
    float expected_bmi = roundf((weight / (height * height)) * 703 * 10) / 10;
    EXPECT_EQ(expected_bmi, bmi);
    EXPECT_EQ("normal weight", get_bmi_category(bmi));
}

TEST(BMICalculator, Overweight)
{
    // Test for overweight
    float weight = 180;
    float height = 70;
    float bmi = calculate_bmi(weight, height);
    float expected_bmi = roundf((weight / (height * height)) * 703 * 10) / 10;
    EXPECT_EQ(expected_bmi, bmi);
    EXPECT_EQ("overweight", get_bmi_category(bmi));
}

TEST(BMICalculator, Obese)
{
    // Test for obese
    float weight = 220;
    float height = 68;
    float bmi = calculate_bmi(weight, height);
    float expected_bmi = roundf((weight / (height * height)) * 703 * 10) / 10;
    EXPECT_EQ(expected_bmi, bmi);
    EXPECT_EQ("obese", get_bmi_category(bmi));
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
