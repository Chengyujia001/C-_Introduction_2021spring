//Cist 004A, Dr. takyiu
//Mack Cheng, March,13,2021
//
//Check whether the input string is in 2 files. 


//output:
//Enter a name(enter '0' to exit):
//jacob
//jacob is not in list
//Jacob
//Jacob is amony the most popular boys name.
//Cat
//Cat is not in list
//Olivia
//Olivia is amony the most popular girls name.



#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;



void inlist(string);

int main() {
	const int size = 100;
	string boys[size];
	string girls[size];
	fstream file1;
	fstream file2;
	string name;
	

	file1.open("BoyNames.txt");		//open files
	file2.open("GirlNames.txt");


	for (int i = 0; i < size; i++) {		//write contents into arrays
		file1 >> boys[i];
		file2 >> girls[i];
	}

	cout << "Enter a name(enter '0' to exit):  " << endl;
	do {
		cin >> name;
		cin.get();

		int count = 0;
		for (int i = 0; i < size; i++) {
			if (boys[i] == name) {
				cout << name << " is amony the most popular boys name." << endl;
				count += 1;
			}

			if (girls[i] == name) {
				cout << name << " is amony the most popular girls name." << endl;
				count += 1;
			}
		}
		if (count == 0){
			cout << name << " is not in list" << endl;
}
	} while (name != "0");
	

	return 0;
}
