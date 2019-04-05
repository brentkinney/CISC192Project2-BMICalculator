// this program calculates the BMI of the user and displays how many pounds away from normal they are as well as the normal range of weight for their height
//Written by Brent Kinney on 4/5/19
#include <iostream>
using namespace std;

int main()
{
	char choice = 'y';
	while (choice == 'y' || choice == 'Y')
	{
		double weightInPounds, heightInInches, bmiValue, normalLow, normalHigh, gainNeeded, lossNeeded;
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

		//determine the normal range of weight for the user's height by checking if their category is not Normal
		if (bmiCategory != "Normal")
		{
			normalLow = ((heightInInches * heightInInches) * 18.5) / 703;
			normalLow = round(normalLow * 100) / 100;
			normalHigh = ((heightInInches * heightInInches) * 25.0) / 703;
			normalHigh = round(normalHigh * 100) / 100;
			cout << "The normal range of weight for your height is " << normalLow << " - " << normalHigh << endl;
			
			//if the user's category is underweight, calculate and display how much they need to gain for a normal BMI
			if (bmiCategory == "Underweight")
			{
				gainNeeded = normalLow - weightInPounds;
				cout << "You must gain " << gainNeeded << "lbs to have a 'Normal' BMI." << endl;
			}
			//if the user was not in the underweight category, calculate and display how much they need to lose for a normal BMI
			else
			{
				lossNeeded = weightInPounds - normalHigh;
				cout << "You must lose " << lossNeeded << "lbs to have a 'Normal' BMI." << endl;
			}

		}
		//if the category is normal, do nothing and print congrats line
		else
			cout << "Congrats, you have a normal BMI!" << endl;


		//see if the user wants to continue and continue if desired
		cout << "Continue? (Y/N): ";
		cin >> choice;
		cout << endl;
	}
	//display author of the program
	cout << "Programmed by Brent Kinney" << endl;
	cout << "Press [Enter] key to end..."; //prompt lets user know
	cin.ignore(256, '\n');
	cin.get();

	return 0;


}