//Cist 004A, Dr. takyiu
//Mack Cheng, March,13,2021
//
//Use 3 independent arrays to store emploee's information.


//output:
//Employee 5658845
//Enter working hours and pay rate :
//3
//4
//
//Employee 4520125
//Enter working hours and pay rate :
//5
//6
//
//Employee 7895122
//Enter working hours and pay rate :
//5
//4
//
//Employee 8777541
//Enter working hours and pay rate :
//3
//4
//
//Employee 8451277
//Enter working hours and pay rate :
//5
//4
//
//Employee 1302850
//Enter working hours and pay rate :
//3
//4
//
//Employee 7580489
//Enter working hours and pay rate :
//5
//4
//
//Employee 5658845
//grooss wage : 12
//
//
//Employee 4520125
//grooss wage : 30
//
//
//Employee 7895122
//grooss wage : 20
//
//
//Employee 8777541
//grooss wage : 12
//
//
//Employee 8451277
//grooss wage : 20
//
//
//Employee 1302850
//grooss wage : 12
//
//
//Employee 7580489
//grooss wage : 20


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	const int size = 7;
	
	int count = 0;



	int empId[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
	int hours[size];
	double payRate[size];
	double wages[size];

	for (int i = 0; i < size; i++) {
		cout << endl << "Employee " << empId[i] << endl;
		cout << "Enter working hours and pay rate:  " << endl;
		cin >> hours[i] >> payRate[i]; 
		cin.get();
	}

	for (int i = 0; i < size; i++) {

		cout << endl << "Employee " << empId[i] << endl;
		cout << "grooss wage: " << hours[i] * payRate[i] << endl << endl;

	}

	return 0;
}
