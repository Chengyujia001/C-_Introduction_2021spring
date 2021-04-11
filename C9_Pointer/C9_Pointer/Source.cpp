#include <iostream>
#include <string>
using namespace std;

void display(int* );

int main()
{
	int x = 20;
	int* ptr = nullptr;

	ptr =& x;

	cout << "x " << x <<endl;
	cout << "ptr: " << ptr << endl;
	display(ptr);

	cout << "new x: " << endl;
	cin >> *ptr;
	cin.get();
	cout << "x " << x << endl;



	return 0;
}


void display( int* a) {
	cout << *a << endl;
}