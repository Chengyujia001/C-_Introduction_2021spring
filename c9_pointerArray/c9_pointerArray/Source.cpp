

#include <iostream>
#include <string>
using namespace std;

void display(int* a);

int main()
{
	int a = 0;
	int x[] = { 10, 20, 30 };
	int* ptr = nullptr;

	const int size = 3;
	int y[size];

	ptr = x;
	cout << "array is: "  << endl;
	for (int e : x) {
		cout << e << " ";
	}
	cout  << endl;
	cout << "sizeof(ptr)" << sizeof(ptr) << endl;
	cout << "sizeof(x)" << sizeof(x) << endl;
	display(ptr);
	cout << "*******************" << endl;
	//cout << "enter 3 numbers"  << endl;
	//for (int i = 0; i < size; i++)
	//	cin >> *(y + i);
	//cout << "y: " << endl;
	//ptr = y;
	//while (a < 3) {
	//	cout << *(ptr)<< "  ";
	//	ptr++;
	//	a++;
	//}
	int* copy = nullptr;
	copy  = &x[1];       // connect the base of ptr to x[1]
	

	cout << " copy is "<< *(copy-1) << "  ";
	cout << " copy is " << *(copy ) << "  ";

	return 0;
}


void display(int* a) {
	cout << "the second element is : " << *(a+1) << endl;
}