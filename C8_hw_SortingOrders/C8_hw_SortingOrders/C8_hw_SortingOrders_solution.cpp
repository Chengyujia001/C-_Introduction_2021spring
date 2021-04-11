//Cist c++ intro, Dr. takyiu
//Mack Cheng, March,20,2021
//
// Chapter 8, Programming Challenge 10: Sorting Orders
//
//output:
//100 101 102 103 104 105 106 107

//100 101 102 103 104 105 106 107


#include<iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void bubbleSort(int[], int);
void selectionSort(int[], int);
void showArray(int[], int);

int main()
{
	const int SIZE = 8;
	int arr1[SIZE] = { 105, 102, 107, 103, 106, 100, 104, 101 };
	int arr2[SIZE] = { 105, 102, 107, 103, 106, 100, 104, 101 };

	bubbleSort(arr1, SIZE);

	cout << endl;

	selectionSort(arr2, SIZE);

	return 0;
}

// ********************************************************
// The bubbleSort function performs an ascending order    *
// bubble sort on the array. The size parameter is the    *
// number of elements in the array. The function has been *
// modified to print the contents of the array after each *
// pass.                                                  *
// ********************************************************
void bubbleSort(int values[], int size)
{
	int temp;
	bool swapped;

	do{
		swapped = false;
		for (int i = 0; i < (size - 1); i++) {
			if (values[i] > values[i + 1]) {
				temp = values[i];
				values[i] = values[i + 1];
				values[i + 1] = temp;
				swapped = true;
			}
		}
	} while (swapped);
	
	
	showArray(values, size);
}


// ********************************************************
// The selectionSort function performs an ascending order *
// selection sort on the array. The size parameter is the *
// number of elements in the array. The function has been *
// modified to print the contents of the array after each *
// pass.                                                  *
// ********************************************************
void selectionSort(int values[], int size)
{
	int startScan;
	int minIndex;
	int minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = values[minIndex];

		for (int index = startScan + 1; index < size; index++)
		{
			if (values[index] < minValue)
			{
				minValue = values[index];
				minIndex = index;
			}
		}

		values[minIndex] = values[startScan];
		values[startScan] = minValue;
	}

	showArray(values, size);
}

// ********************************************************
// The showArray function displays the contents of the    *
// array. The size parameter is the number of elements.   *
// ********************************************************
void showArray(int values[], int size)
{
	for (int count = 0; count < size; count++)
		cout << values[count] << " ";

	cout << endl;
}
