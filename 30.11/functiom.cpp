#include <iostream>

bool checkValueElement(int* array, int length, int value);
int findFirstElement(int* array, int length, int value);
int findLastElement(int* array, int length, int value);
void bubbleSorting(int* array, int size);
void insertedSort(int* array, int size);
void selectSort(int* array, int size);
int swapMinWithMax(int* array, int length);

using namespace std;

bool checkValueElement(int* array,int length,int value) {
	for (int i = 0; i < length; i++) {
		if (value != array[i]) {
			return false;
		}
		else {
			return true;
		}
	}
}
int findFirstElement(int* array,int length,int value) {
	for (int i = 0; i < length; i++) {
		if (value == array[i]) {
			return i;
		}
		else {
			return -1;
		}
	}
}

int findLastElement(int* array, int length, int value) {
	for (int i = length - 1; i > length; i--) {
		if (value == array[i]) {
			return i;
		}
		else {
			return -1;
		}
	}
}

int countValueElements(int* array, int length, int value) {
	for (int i = 0; i < length; i++) {
		if (value == array[i] && value == array[i - 1]) {
			cout << array[i] + array[i - 1];
		}else{
			return -1;
		}
	}
}

void bubbleSorting(int* array, int size) {
	for (int k = 0; k < size - 1 - k; k++) {
		for (int i = 0; i < size - 1; i++) {
			if (array[i] < array[i + 1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				cout << array[i] << " ";
			}
		}
	}
}

void selectSort(int* array,int size) {
	int j = 0;

	int minIndex = 0;

	for (int i = 1; i < size ;i++) {
		if (array[i] < array[minIndex]) {
			minIndex = i;
		}
	}
	int t = array[j];
	array[j] = array[minIndex];
	array[minIndex] = t;
}

void insertedSort(int* array, int size) {
	for (int i = 1; i < size; i++) {
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}

}

int swapMinWithMax(int* array, int size,int n) {
	int min = array[n];
	int max = array[n];

	for (int i = 0; i < size; i++) {
		if (i > max) {
			max = array[i];
		}

		for (int i = 0; i < size; i++) {
			if (array[i] < min) {
				min = array[i];
			}
		}
		swap(min, max);
		cout << "Min: " << min << endl;
		cout << "Max: " << max << endl;

		return min, max;
	}
}

