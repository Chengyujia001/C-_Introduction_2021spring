//Cist c++ intro, Dr. takyiu
//Mack Cheng, March,20,2021
//
// Chapter 8, Programming Challenge 7: Binary String Search
//
//output:
/*  ##############################
enter a name on list: Griffin, Jim

Here are the names sorted :
--------------------------
Allen, Jim
...
Wolfe, Bill
Enter a name to search for: Griffin, Jim
That name is found at element 3 in the array.
############################################
enter a name not on list: dd

Here are the names sorted :
--------------------------
Allen, Jim
...
Wolfe, Bill
Enter a name to search for: dd
That names does not exist in the array.
###############################
*/




#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void selectionSort(string[], int);
void displayArray(string[], int);
int binarySearch(string[], int, string);

int main()
{
	const int NUM_NAMES = 20;
	string search;
	string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
		"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
		"Taylor, Terri", "Johnson, Jill",
		"Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
		"James, Jean", "Weaver, Jim", "Pore, Bob",
		"Rutherford, Greg", "Javens, Renee",
		"Harrison, Rose", "Setzer, Cathy",
		"Pike, Gordon", "Holland, Beth" };

	// Sort the array.
	selectionSort(names, NUM_NAMES);

	// Display the sorted array.
	cout << "\nHere are the names sorted:\n";
	cout << "--------------------------\n";
	displayArray(names, NUM_NAMES);

	// Get a name to search for.
	cout << "Enter a name to search for: ";
	getline(cin, search);

	// Search for the name.
	int results = binarySearch(names, NUM_NAMES, search);

	// If results contains -1 the string was not found.
	if (results == -1)
		cout << "That names does not exist in the array.\n";
	else
	{
		// Otherwise results contains the subscript of
		// the specified name in the array.
		cout << "That name is found at element " << results;
		cout << " in the array.\n";
	}
	cin.get();
	return 0;
}

// ********************************************************
// The selectionSort function performs an ascending order *
// selection sort on an array of strings. The size        *
// parameter is the number of elements in the array.      *
// ********************************************************
void selectionSort(string values[], int size)
{
	int startScan;
	int minIndex;
	string minValue;

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
}

// ********************************************************
// The displayArray function displays the contents of     *
// the array.                                             *
// ********************************************************
void displayArray(string values[], int size)
{
	for (int i = 0; i < size; i++)
		cout << values[i] << endl;
}

// ********************************************************
// The binarySearch function performs a binary search on  *
// an array of strings. array, which has a maximum of     *
// size elements, is searched for the string stored in    *
// value. If the string is found, its array subscript is  *
// returned. Otherwise, -1 is returned indicating the     *
// string was not in the array.                           *
// ********************************************************
int binarySearch(string values[], int size, string value)
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1;			//return the index or 'false'

	do {
		middle = (first + last) / 2;
		if (values[middle] == value) {
			position = middle;
			break;
		}
		else if (values[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;

	} while (first <= last);
	
	return position;
}