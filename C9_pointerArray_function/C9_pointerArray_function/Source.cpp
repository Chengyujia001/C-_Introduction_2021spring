#include <iostream>
#include <iomanip> 
using namespace std;

void intput_Sales(double*, int);
double get_total(double* , int);

int main()
{
	//create sale array
	const int size = 3;
	double saleArray[size]; //this is a ptr

	intput_Sales(saleArray, size);

	cout << fixed << showpoint << setprecision(2);
	cout << "total: " << get_total(saleArray, size);

	return 0;
}


void intput_Sales(double* a, int b) {
	cout << "enter: ";
	for (int i = 0; i < b; i++) {
		cin >> a[i];
	}

}


double get_total(double* a, int b) {
	double t = 0;
	cout << "your input are: ";
	for (int i = 0; i < b; i++) {
		cout << *(a + i)<<" " ;
		t += a[i];
	}
	cout << endl;
	return t;
}
