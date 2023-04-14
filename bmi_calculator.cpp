#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

float calculate_bmi(float weight_lbs, float height_in)
{
    // Calculate the BMI by dividing the weight in pounds by the height in inches squared, and then multiplying by 703
    float bmi = (weight_lbs / (pow(height_in, 2))) * 703;

    return bmi;
}

string get_bmi_classification(float bmi)
{
    // Print a message indicating whether the user is normal weight, overweight, or obese
    if (bmi < 18.5)
    {
        return "underweight";
    }
    else if (bmi >= 18.5 && bmi < 25.0)
    {
        return "normal weight";
    }
    else if (bmi >= 25.0 && bmi < 30.0)
    {
        return "overweight";
    }
    else
    {
        return "obese";
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

        // Get BMI classification
        string classification = get_bmi_classification(bmi);

        // Print classification to the console
        cout << "You are " << classification << "." << endl;

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
