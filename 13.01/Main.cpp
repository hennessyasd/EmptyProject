#include "Header.h"

int main()
{
	int size;

	do {
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);

	int* array = new int[size];

	InitRandomValues(array, size);

	showElements(array, size);

	//double avg = calculateAvgValue(array, size); // #1

	//cout << "Result = " << avg << endl;

	cout << "Equal numbers: " <<checkEqualNumb(array, size) << endl; // #2

	cout << "Avg value beside 1st and last numbers: " << calculateAvgValueBesideExtrVal(array, size) << endl; // #3

	delete[] array;
}