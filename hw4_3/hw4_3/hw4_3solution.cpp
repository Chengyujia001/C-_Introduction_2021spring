//Cist 004A
//feb/28/2021
//Mack
//
//Read a txt file with random numbers and display average
//
//output:
//The number of numbers in Random.txt     200
//The sum of numbers in Random.txt        105527
//The average of number : 527.00

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
	fstream file1;
	int content, number=0, sum=0;
	double ave;

	file1.open("Random.txt");
	
	if (file1) {
		while (file1 >> content) {
			number++;
			sum += content;
		}
	}
	
	ave = sum / number;

	cout << "The number of numbers in Random.txt\t" << number << endl;
	cout << "The sum of numbers in Random.txt\t" << sum << endl;
	cout << "The average of number:\t\t\t" << fixed << setprecision(2) << ave << endl;



	file1.close();

	return 0;
}