#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <memory> //smart pointers
#include <cstdlib> // For rand and srand
#include <ctime> // For the time function 
using namespace std;

int* getData();
int* getData2();


int main() {
    int* nums = getData();
    
    printf("%d,%d,%d\n", nums[0], nums[1], nums[2]);    //1,2,3
    printf("%d,%d,%d\n", nums[0], nums[1], nums[2]);    //-858993460,-858993460,-858993460

    nums = getData();
    getData2();
    printf("%d,%d,%d\n", nums[0], nums[1], nums[2]);    //10,20,30  
                                                        //data in stack are released


    return 0;
}







int* getData()
{
    int nums[10] = { 1,2,3,4,5,6,7,8 };
    return nums;
}

int* getData2()
{
    int aaa[10] =  {10,20,30,40,50,60,70,80}; 
    return aaa;
}