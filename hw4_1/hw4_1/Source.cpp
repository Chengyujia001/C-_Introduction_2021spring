//Cist 004A
//feb/21/2021
//Mack
//
//Input: weight = 90, height = 55
//
//output
//enter your weightand height
//90
//55
//Your Body Mass Index is : 20.9157, you are fine


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	double weight, height, bmi;
	
	cout << "enter your weight and height\n";
	cin >> weight >> height;
	bmi = weight * 703 / pow(height, 2);
	cout << "Your Body Mass Index is: " << bmi;
	if (bmi < 18.5)
		cout << " ,you are underweight";
	else if (bmi > 25)
		cout << " ,you are overweight";
	else
		cout << " ,you are fine";

	return 0;
}