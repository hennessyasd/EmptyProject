#include <iostream>

using namespace std;

//#define SIZE 5;

int main() {

	int* array = new int[5];

	for (int i = 0; i < 5; i++) { // prog dont wanna use define "SIZE" :(
		cin >> array[i] ;
	}

	for (int i = 0; i < 5 - 1; i++){
		for (int k = 0; k < 5 - i - 1; k++) {
			if (array[k] > array[k + 1]) {
				int temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		cout << array[i] << " ";
	}

	cout << endl;

	delete[] array;

	system("pause");
	return 0;
}
