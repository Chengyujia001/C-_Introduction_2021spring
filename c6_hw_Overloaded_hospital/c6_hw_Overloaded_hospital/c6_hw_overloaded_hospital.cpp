//Cist 004A, Dr. takyiu
//Mack Cheng, March,13,2021
//
//USE two overloaded functions to calculate to total charge for inpatient and outpatient.
//
//output:
//Inpatient?(Y/N)
//y
//Return charge for hospital servies :
//2323.44
//Hospital medication charges :
//232
//The number of days spent in the hospital :
//33
//The daily rate :
//32.444444
//Total charges : 2620.88





#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double total(double&, double&);
double total(double&, double&, double&, double&);


int main() {
	char inpatient;
	double ser, med, day, rate;

	cout << "Inpatient?(Y/N)" << endl;
	cin >> inpatient;

	cout << "Return charge for hospital servies: "  << endl;
	cin >> ser;
	cout << "Hospital medication charges: "  << endl;
	cin >> med;

	cout << fixed << setprecision(2);
	if (inpatient == 'Y' || inpatient == 'y') {
		cout << "The number of days spent in the hospital: "  << endl;
		cin >> day;
		cout << "The daily rate: "  << endl;
		cin >> rate;

		cout << "Total charges: " << total(ser, med, day, rate) << endl;
	}
	else
		cout << "Total charges: " << total(ser, med) << endl;

	return 0;
}

double total(double& sub1, double& sub2) {
	return sub1 + sub2;
}

double total(double& sub1, double& sub2, double& sub3, double& sub4) {
	return sub1 + sub2 + sub3 + sub4;
}