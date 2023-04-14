#include <iostream>
#include <cmath>
#include <limits>
#include <string>

using namespace std;

string calculate_bmi_category(float bmi);

int main()
{
    bool repeat = true;
    while (repeat) 
    {
        float weight_lbs, height_in;
        cout << "Enter your height in inches: ";
        
        while (!(cin >> height_in))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number for height: ";
        }

        cout << "Enter your weight in pounds: ";

        while (!(cin >> weight_lbs))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number for weight: ";
        }

        float bmi = (weight_lbs / (pow(height_in, 2))) * 703;
        cout << endl << "Your BMI is: " << bmi << endl;
        cout << calculate_bmi_category(bmi) << endl;

        char repeat_input;
        cout << "Would you like to enter another weight? (Y/N): ";
        cin >> repeat_input;

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

string calculate_bmi_category(float bmi)
{
    if (bmi < 18.5)
    {
        return "You are underweight.";
    }
    else if (bmi >= 18.5 && bmi < 25.0)
    {
        return "You have a normal weight.";
    }
    else if (bmi >= 25.0 && bmi < 30.0)
    {
        return "You are overweight.";
    }
    else
    {
        return "You are obese.";
    }
}
