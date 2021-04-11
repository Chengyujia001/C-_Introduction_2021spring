//Cist 004A
//feb/21/2021
//Mack
//
//Long-Distance Calls
//
//Input: startingTime, CallTime
//
//output:
//...

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int CallTime;
	double startingTime, rate, charge;

	cout << "enter the starting time(HH.MM) and the minutes of the call \n";
	cin >> startingTime >> CallTime;

	if (startingTime <= 0 || startingTime > 23.59 || (startingTime - static_cast<int>(startingTime)) > 0.59) {
		cout << "Invalid input";
	}
	else {
		cout << "fine input";
	}

	if (startingTime < 7.0)
		rate = 0.05;
	else if (startingTime > 19.01)
		rate = 0.20;
	else
		rate = 0.45;

	charge = rate * CallTime;
	cout << "total: $ " << charge;

	return 0;
}