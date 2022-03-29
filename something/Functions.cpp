#include "Header.h"

void initAlphabet(alphabet* array) {
	string s = "qwertyuiopasdfghjklzxcvbnm";

	for (int i = 0; i < SIZE; i++) {
		array[i].counter = 0;
		array[i].symbol = s[i];
	}
}

void showAlphabet(alphabet* array) {
	for (int i = 0; i < SIZE; i++) {
		cout << array[i].symbol << " - " << array[i].counter << endl;
	}
}

void readFile(alphabet* array, char* fileName) {
	ifstream fin;

	fin.open("d:\\igor\\in.txt");

	if (fin.fail()) {
		return;
	}

	while (!fin.eof()) {
		char ch;
		cin >> ch;

		for (int i = 0; i < SIZE; i++) {
			if (ch == array[i].symbol) {
				array[i].counter++;
				break;
			}
		}
	}
	fin.close();
}

void sortAlphabet(alphabet* array) {
	for (int i = 0; i < SIZE - 1; i++){
		for (int j = 0; j < SIZE - 1 - i; j++){
			if (array[j].counter > array[j + 1].counter) {
				alphabet temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

void writeAlphabet(alphabet* array, char* fileName) {
	ofstream fout;

	fout.open(fileName);

	if (fout.fail()) {
		return;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << array[i].symbol << " - " << array[i].counter << endl;
	}
	fout.close();
}