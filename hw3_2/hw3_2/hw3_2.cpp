//Cist 004A
//feb/21/2021
//Mack
//
//Get how many days in a month
//
//Input: month = 2, year =2008
//
//output:
//enter a month
//2
//
//enter year
//2008
//
//29 days

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int year, month, day;
	bool leap=false;

	cout << "enter a month\n";
	cin >> month;
	cout << "\nenter year\n";
	cin >> year;
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		leap = true;

	switch (month)
	{
	case 1:
		day = 31;
		break;

	case 2:
		leap?day = 29:day = 28;
		
		break;

	case 3:
		day = 31;
		break;

	case 4:
		day = 30;
		break;

	case 5:
		day = 31;
		break;

	case 6:
		day = 30;
		break;

	case 7:
		day = 31;
		break;

	case 8 :
		day = 31;
		break;

	case 9:
		day = 30;
		break;

	case 10:
		day = 31;
		break;

	case 11:
		day = 30;
		break;

	case 12:
		day = 31;
		break;

	default:
		cout << "\nInvalid\n";
		break;
	}


	cout << "\n" << day << " days\n";
	return 0;
}