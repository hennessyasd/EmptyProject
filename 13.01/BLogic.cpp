#include "Header.h"

void showElements(int* array, int length) {
	cout << "Array elements: ";

	for (int i = 0; i < length; i++) {
		cout << array[i] << " ";
	}

	cout << endl;
}

void InitRandomValues(int* array, int length) {
	srand(time(NULL));

	for (int i = 0; i < length; i++) {
		array[i] = rand() % (MAX_VALUE + 1);
	}

}

int sumValues(int* array, int length) {
	int sum = 0;

	for (int i = 0; i < length; i++)
	{
		sum += array[i];
	}

	return sum;
}

int countNoZeroElements(int* array, int length) {
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (array[i] != 0) {
			count++;
		}
	}

	return count;
}

double calculateAvgValue(int* array, int length) {
	double sum = sumValues(array, length);
	int count = countNoZeroElements(array, length);

	double avg = sum / count;

	return avg;
}

bool checkEqualNumb(int* array, int length) {

	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++){
			if (array[i] == array[j]) {
				return true;
			}
		}
	}

	return false;
}


int sumBesideExtremeValues(int* array, int length) {
	int sum_2 = 0;

	for (int i = 1; i < length - 1; i++)
	{
		sum_2 += array[i];
	}
	return sum_2;
}

int countBesideExtremeElements(int* array, int length) {
	int count_2 = 0;

	for (int i = 1; i < length-1; i++)
	{
		if (array[i] != 0) {
			count_2++;
		}
	}

	return count_2;
}

double calculateAvgValueBesideExtrVal(int* array, int length) {
	double sum = sumBesideExtremeValues(array, length);
	int count = countBesideExtremeElements(array, length);

	double avg = sum / count;

	return avg;
}