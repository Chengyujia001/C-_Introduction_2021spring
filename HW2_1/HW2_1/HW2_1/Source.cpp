//Cist 004A; C++ intro
//feb/14/2021
//Mack
//
//Simple calculation:
//input: 
//rate=0.0425, timeCompunded=12, principal=1000
//
//output:
//Interest Rate:                  4.25%
//Time compounded :				  12.00
//Principal : 				$	1000.00
//Interest : 				$	   1.04
//Amount in Savings : 		$	1043.34

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double rate, timeCompunded, principal, interest, amount;
	cout << "enter principal, the interest rate and number of time compounded in one year\n";
	cin >> principal >> rate >> timeCompunded;

	interest = pow(1 + rate / timeCompunded, timeCompunded); //cal interest and amount
	amount = interest * principal;

	cout << setprecision(2) << fixed;
	cout << setw(25) << left << "Interest Rate: " << setw(10) << right << rate * 100 << "%" << endl;
	cout << setw(25) << left << "Time compounded: " << setw(10) << right << timeCompunded << endl;
	cout << setw(24) << left << "Principal: " << "$" << setw(10) << right << principal << endl;
	cout << setw(24) << left << "Interest: " << "$" << setw(10) << right << interest << endl;
	cout << setw(24) << left << "Amount in Savings: " << "$" << setw(10) << right << amount << endl;
	return 0;
}

