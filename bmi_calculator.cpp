#include <iostream>
#include <cmath>
#include <limits>
#include <stdexcept>
#include <cctype>

using namespace std;

float calculate_bmi(float weight_lbs, float height_in) {
    if (weight_lbs <= 0 || height_in <= 0) {
        throw invalid_argument("Weight and height must be greater than 0.");
    }
    return (weight_lbs / (pow(height_in, 2))) * 703;
}

string get_bmi_category(float bmi) {
    if (bmi < 18.5) {
        return "You are underweight.";
    }
    else if (bmi >= 18.5 && bmi < 25.0) {
        return "You have a normal weight.";
    }
    else if (bmi >= 25.0 && bmi < 30.0) {
        return "You are overweight.";
    }
    else {
        return "You are obese.";
    }
}

int main()
{
    bool repeat = true;
    while (repeat)
    {
        // Declare variables for weight and height
        float weight_lbs, height_in;

        // Prompt the user to enter their height in inches
        cout << "Enter your height in inches: ";

        // Check if input is valid, and reprompt if not
        while (!(cin >> height_in))
        {
            cin.clear(); // clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard remaining input
            cout << "Invalid input. Please enter a number for height: ";
        }

        // Prompt the user to enter their weight in pounds
        cout << "Enter your weight in pounds: ";

        // Check if input is valid, and reprompt if not
        while (!(cin >> weight_lbs))
        {
            cin.clear(); // clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard remaining input
            cout << "Invalid input. Please enter a number for weight: ";
        }

        // Calculate the BMI
        float bmi = calculate_bmi(weight_lbs, height_in);

        // Print the BMI to the console
        cout << endl << "Your BMI is: " << bmi << endl;

        // Print the appropriate BMI category message
        cout << get_bmi_category(bmi) << endl;

        // Ask the user if they want to repeat
        char repeat_input;
        cout << "Would you like to enter another weight? (Y/N): ";
        cin >> repeat_input;

        // Check if input is valid, and reprompt if not
        while (tolower(repeat_input) != 'y' && tolower(repeat_input) != 'n')
        {
            cout << "Invalid input. Please enter Y or N: ";
            cin >> repeat_input;
        }

        if (tolower(repeat_input) == 'n')
        {
            repeat = false;
        }
    }

    return 0;
}
