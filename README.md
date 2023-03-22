Name: Brandon Johnson  

NetID: bdj176 

GitHub: bjproxy 

3/21/2023 

Project 2 

 

Introduction: In this project, we developed a command-line application that calculates a user's Body Mass Index (BMI) based on their height and weight input. The application uses test-driven development (TDD) to ensure each function works correctly. 

Functions and Associated Tests:  

 Function 1: main  

Description: This function prompts the user to enter their height and weight, and stores these values as height_in and weight_lbs. It will then run these values into float bmi, which is a BMI calculator, which will then output what the readings are according to the BMI chart. 

Test cases:  

Test with valid input  

Test with non-numeric input 

Test with valid input  

Test with zero height or weight  

Test with negative height or weight 

Test with a BMI value in each category range 

Boundary Testing Technique: For boundary testing, we used the extreme point combination boundary testing technique to test the exact boundaries and values slightly above and below the boundaries to ensure the correct output in each BMI category. 

Boundary 18.5 

Test slightly below 18.5 (e.g., 18.4) 

Test at 18.5 

Test slightly above 18.5 (e.g., 18.6) 

Boundary 25.0 

Test slightly below 25.0 (e.g., 24.9) 

Test at 25.0 

Test slightly above 25.0 (e.g., 25.1) 

Boundary 30.0 

Test slightly below 30.0 (e.g., 29.9) 

Test at 30.0 

Test slightly above 30.0 (e.g., 30.1) 

Induced Boundary Shift Insert a screenshot of the code snippet with the boundary shift problem (0.1 shift at the lower boundary of "Normal Weight"). 
![boundaryshiftprob](https://user-images.githubusercontent.com/112009871/226787158-c9fb3aba-ed42-4a8a-8fe6-4e3b08f852be.PNG)

Test Case Efficacy for Boundary Shift Problem: Explain if your test cases caught the boundary shift problem and why or why not. 

If we were to shift the lower boundary of the "Normal weight" category up to 18.6, our test cases would still catch the boundary shift problem because we have included tests for values slightly below and above the original boundary (18.5). Specifically, the test case with a BMI of 18.6 would help identify the boundary shift problem. In this scenario, the expected output for a BMI of 18.6 would be "Normal weight" according to the original boundaries. However, with the boundary shift to 18.6, the output would incorrectly indicate "Underweight" for a BMI of 18.6. This discrepancy in the test results would signal that there is a boundary shift problem in the code. 

Setup and Execution Instructions:  

Links to download the application: [https://github.com/bjproxy/SWQAProject2]  

Instructions for setting up and executing the application on Windows 10 OS: 

Download and install a C++ compiler (e.g., GCC, MinGW) 

Clone the GitHub repository to your local machine 

Navigate to the project folder in a command prompt or terminal 

Compile the program using the following command: g++ -o bmi_calculator main.cpp 

Run the compiled program by entering ./bmi_calculator 

Application Output Screenshots: Provide screenshots showing the correct output for all four BMI categories:  

Underweight 

 ![underw](https://user-images.githubusercontent.com/112009871/226787038-589bba72-276b-4099-8f5e-85610f9c9efa.PNG)


Normal weight 

![normalw](https://user-images.githubusercontent.com/112009871/226787049-8832506d-4a91-4465-9721-db8606007ba2.PNG)
 

Overweight  

 ![overw](https://user-images.githubusercontent.com/112009871/226787058-2fdb71ac-4dee-4162-9c91-af2a32693a1c.PNG)


Obese 

![obese](https://user-images.githubusercontent.com/112009871/226787068-1d7d450c-0516-429f-b76e-fe4d93bbcca1.PNG)
 
