#include <iostream>

using namespace std;

void bubbleSorting(int* array, int size);

void bubbleSorting(int* array,int size) {
		for (int k = 0; k < size - 1; k++) {
			for (int i = 0; i < size - 1; i++) {
				if (array[i] < array [i + 1]){
					int temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
			}
		}
	}
}