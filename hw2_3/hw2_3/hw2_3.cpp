//Cist 004A; C++ intro
//feb/14/2021
//Mack
//calculate average rainfall for 3 monthes
//
//input: 
//rainfall for 3 monthes
//
//output:
//enter 3 monthes
//june
//may
//jan
//enter the amounts of rainfall in each month
//3
//6
//5.645
//The average rainfall for june, may and janis 4.88 inches.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	string month1, month2, month3;;
	double n1, n2, n3, n;
	cout << "enter 3 monthes\n";
	cin >> month1 >> month2 >> month3;
	cout << "enter the amounts of rainfall in each month\n";
	cin >> n1 >> n2 >> n3;
	n = (n1 + n2 + n3) / 3;

	cout << "The average rainfall for "
		<< month1 << ", " << month2 << " and " << month3
		<< "is " <<fixed<<setprecision(2)<< n << " inches.";
	return 0;
}