#include <iostream>

using namespace std;

void showArrayElements(int* array, int length);
int swapMinWithMax(int* array, int length);

void showArrayElements(int* array,int length) {
	for (int i = 0; i < length; i++) {
		cout << array[i] << " ";
	}
}

int swapMinWithMax(int* array, int length) {
	int min = 0;
	int max = 0;

	for (int i = 0; i < length ; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	for (int ) {
		if (array[] > min) {
			array[i] = min;
		}
	}

	cout << 

	return ;
}