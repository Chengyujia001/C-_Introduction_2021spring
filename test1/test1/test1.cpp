// test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//int main()
//{
//    std::cout << "Hello World!\n";
//
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
using namespace std;

int main()
{
    int x[] = { 10, 20, 30 };
    int* a = x;

    string y[] = { "re", "fdsf" };
    string* b = y;
    
    cout << a[1] << endl;
    cout << x[1] << endl;
    cout << *(x + 1) << endl;
    cout << *(a + 1) << endl;
    cout << 1[a] << endl;
    cout << 1[x] << endl;
    cout << "size: " << sizeof(b) << endl;



    cout << b[0]<<endl;
    cout << *(b+1) << endl;
    cout << "size: " << sizeof(b) << endl;

    return 0;
}

//How many hours did you work ? 11
//How much do you get paid per hour ? 22
//You have earned $242