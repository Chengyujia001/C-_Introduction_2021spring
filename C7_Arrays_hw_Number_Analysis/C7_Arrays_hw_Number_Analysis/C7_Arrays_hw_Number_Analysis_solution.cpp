//Cist 004A, Dr. takyiu
//Mack Cheng, March,13,2021
//
//Read a file which contains a series of numbers written on separate lines. Get into an arry and display"
//The lowest number in the array
//The hightes number
//The total
//The average


//output:
//enter file name:
//numbers.txt
//The lowest number is : 8
//The max number is : 89
//The sum is : 520
//The average is : 43		

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


	using namespace std;

	int main() {
		string filename;
		fstream file1;
		const int size = 12;
		int number[size];
		int count = 0;
	

		cout << "enter file name: " << endl;
		cin >> filename;
		cin.get();
		file1.open(filename);		//open file

		while (file1 >> number[count])
			count++;

		file1.close();

		int lowest = number[0];
		int max = number[0];
		int total = 0;
		int ave = 0;


		for (int e : number) {
			if (e < lowest)
				lowest = e;
			if (e > max)
				max = e;

			total += e;
		}

		cout << "The lowest number is: " << lowest << endl;
		cout << "The max number is: " << max << endl;
		cout << "The sum is: " << total << endl;
		cout << "The average is: " << total / size << endl;

		return 0;
	}






