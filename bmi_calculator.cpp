#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

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

        // Calculate the BMI by dividing the weight in pounds by the height in inches squared, and then multiplying by 703
        float bmi = (weight_lbs / (pow(height_in, 2))) * 703;

        // Print the BMI to the console
        cout << endl << "Your BMI is: " << bmi << endl;

        // Print a message indicating whether the user is normal weight, overweight, or obese
        if (bmi < 18.5)
        {
            cout << "You are underweight." << endl;
        }
        else if (bmi >= 18.5 && bmi < 25.0)
        {
            cout << "You have a normal weight." << endl;
        }
        else if (bmi >= 25.0 && bmi < 30.0)
        {
            cout << "You are overweight." << endl;
        }
        else
        {
            cout << "You are obese." << endl;
        }

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
