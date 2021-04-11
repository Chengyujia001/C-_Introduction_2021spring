//Cist 004A
//feb/28/2021
//Mack
//
//Average Rainfall: ask for the number of years and rainfall for each months
//output:
//Enter the annual interest rate, the starting balanceand number of months
//0.06
//2000
//3
//Month 1: Enter the amount of deposit.
//- 5
//Invalid, deposit closed.
//
//Month 1 : Enter the amount of withdraw.
//4
//Month 2 : Enter the amount of deposit.
//2
//Month 2 : Enter the amount of withdraw.
//3
//Month 3 : Enter the amount of deposit.
//5
//Month 3 : Enter the amount of withdraw.
//3
//balance ramin : 2027.09
//total amount of deposite : 7.00
//total amount of withdraw : 10.00
//total amount of interest : 30.09

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int month£»

int main() {
	int month;
	double rate, balance = 0, deposit, withdraw,
		ttdeposit = 0, ttwithdraw = 0, ttinterest = 0;

	cout << "Enter the annual interest rate, the starting balance and number of months\n";			
	cin >> rate >> balance >> month;


	for (int i = 1; i <= month; i++) {
		cout << "Month " << i << ": Enter the amount of deposit.\n ";		//deposite
		cin >> deposit;
		if (deposit < 0) {
			cout << "Invalid, deposit closed.\n\n ";
			deposit = 0;
		}

		cout <<"Month " << i << ": Enter the amount of withdraw.\n ";		//withdraw
		cin >> withdraw;
		if (withdraw < 0) {
			cout << "Invalid, withdraw closed.\n\n ";
			withdraw = 0;
		}

		
		ttdeposit += deposit;										//total deposite
		ttwithdraw += withdraw;										//total withdraw
		ttinterest += (balance + deposit - withdraw) * (rate / 12); //total interest
		balance = (balance + deposit - withdraw) * (1 + rate / 12);  //new balance
	}

	cout << "balance ramin:\t\t" <<fixed<<setprecision(2)<< balance << endl;
	cout << "total amount of deposite:\t\t" << ttdeposit << endl;
	cout << "total amount of withdraw:\t\t" << ttwithdraw << endl;
	cout << "total amount of interest:\t\t" << ttinterest << endl;

	return 0;
}