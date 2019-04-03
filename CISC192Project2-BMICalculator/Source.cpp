// this program calculates the BMI of the user and displays how many pounds away from normal they are
#include <iostream>
using namespace std;

int main()
{
	double weightInPounds, heightInInches;

	//display the BMI table for the User
	cout << "BMI VALUES" << endl;
	cout << "Underweight: less than 18.5" << endl;
	cout << "Normal: in the interval [18.5, 25.0]" << endl;
	cout << "Overweight: in the interval (25.0, 30.0] " << endl;
	cout << "Obese: greater than 30" << endl;

	//ask the user for their weight
	cout << "What is your weight in pounds? ";
	cin >> weightInPounds;

	//ask the user for their height
	cout << "What is your height in inches? ";
	cin >> heightInInches;

}