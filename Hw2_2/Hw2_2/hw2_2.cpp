#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int year, count;
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	year = 1600;
	if (isLeapYear) {
		cout << "t";
	}
	else
		cout << "w";

	return 0;
}
