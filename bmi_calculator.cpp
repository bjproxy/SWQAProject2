#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	// Declare variables for weight and height
	float weight_lbs, height_in;

	// Prompt the user to enter their height in inches
	cout << "Enter your height in inches: ";
	cin >> height_in;

	// Prompt the user to enter their weight in pounds
	cout << "Enter your weight in pounds: ";
	cin >> weight_lbs;

	// Calculate the BMI by dividing the weight in pounds by the height in inches squared, and then multiplying by 703
	float bmi = (weight_lbs / (pow(height_in, 2))) * 703;

	// Print the BMI to the console
	cout << endl << "Your BMI is: " << bmi << endl;
	// Print a message indicating whether the user is normal weight, overweight, or obese
	if (bmi < 18.5) 
	{
		cout << "You are underweight." << endl;
	}
	else if (bmi >= 18.6 && bmi < 25.0) 
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

	return 0;
}
