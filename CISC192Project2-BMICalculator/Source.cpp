// this program calculates the BMI of the user and displays how many pounds away from normal they are
//Written by Brent Kinney on 4/5/19
#include <iostream>
using namespace std;

int main()
{
	double weightInPounds, heightInInches, bmiValue;
	string bmiCategory;

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

	//calculate the users BMI
	bmiValue = (weightInPounds * 703) / (heightInInches * heightInInches);
	bmiValue = round(bmiValue * 100) / 100;
	cout << "Your BMI value is: " << bmiValue << endl;

	//determine what BMI category the user is and display it
	if (bmiValue < 18.5) {
		bmiCategory = "Underweight";
	}
	else if (bmiValue >= 18.5 && bmiValue < 25.1) {
		bmiCategory = "Normal";
	}
	else if (bmiValue > 25.0 && bmiValue <= 30.0) {
		bmiCategory = "Overweight";
	}
	else {
		bmiCategory = "Obese";
	}

	cout << "Your BMI Category is " << bmiCategory << endl;

	cout << "Programmed by Brent Kinney" << endl;

	cout << "Press [Enter] key to end..."; //prompt lets user know
	cin.ignore(256, '\n');
	cin.get();

	return 0;

}