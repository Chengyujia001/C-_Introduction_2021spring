//Cist 004A, Dr. takyiu
//Mack Cheng, spring 2021
//Chapter 9, Programming Challenge 5: Pointer Rewrite
//output: 150


#include <iostream>
#include <string>
using namespace std;

int doSomething(int*, int*);

int main()
{
    int x = 5, y = 10;
    cout << doSomething(&x, &y) << endl;
    return 0;
}

// The doSomething function
int doSomething(int* x, int* y)
{
    int temp = *x;
    *x = (*y) * 10;
    *y = temp * 10;


    return *x + *y;
}

