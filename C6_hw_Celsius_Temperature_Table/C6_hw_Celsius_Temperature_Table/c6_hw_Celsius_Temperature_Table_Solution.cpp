//Cist 004A, Dr. takyiu
//Mack Cheng, March,13,2021
//
//display a table of converting Fahreheit to Celsius
//
//output:
//Fahreheit: 0.00                  Celsius: -17.78
//Fahreheit: 1.00                  Celsius : -17.22
//Fahreheit : 2.00                  Celsius : -16.67
//Fahreheit : 3.00                  Celsius : -16.11
//Fahreheit : 4.00                  Celsius : -15.56
//Fahreheit : 5.00                  Celsius : -15.00
//Fahreheit : 6.00                  Celsius : -14.44
//Fahreheit : 7.00                  Celsius : -13.89
//Fahreheit : 8.00                  Celsius : -13.33
//Fahreheit : 9.00                  Celsius : -12.78
//Fahreheit : 10.00                 Celsius : -12.22
//Fahreheit : 11.00                 Celsius : -11.67
//Fahreheit : 12.00                 Celsius : -11.11
//Fahreheit : 13.00                 Celsius : -10.56
//Fahreheit : 14.00                 Celsius : -10.00
//Fahreheit : 15.00                 Celsius : -9.44
//Fahreheit : 16.00                 Celsius : -8.89
//Fahreheit : 17.00                 Celsius : -8.33
//Fahreheit : 18.00                 Celsius : -7.78
//Fahreheit : 19.00                 Celsius : -7.22
//Fahreheit : 20.00                 Celsius : -6.67

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double celsius(double&);


int main() {
	double Fahreheit = 0;

	do {
		printf("Fahreheit: %.2f \t\t Celsius: %.2f \n", Fahreheit, celsius(Fahreheit));
		//cout << fixed << setprecision(2);
		//cout << celsius(Fahreheit) << endl;

		Fahreheit++;

	} while (Fahreheit <= 20);

	return 0;
}

double celsius(double& temperature) {
	return 5 * (temperature - 32) / 9;
}