#include "Header.h"

int** initNumbersforMatrix(char* fileName, int* n, int* m) {
	ifstream fin;

	fin.open(fileName);

	if (fin.fail()) {
		return NULL;
	}

	fin >> *n >> *m;

	int** matrix = new int* [*n];

	for (int i = 0; i < *n; i++) {
		matrix[i] = new int[*m];
	}

	for (int i = 0; i < *n; i++) {
		for (int j = 0; j < *m; j++)
		{
			fin >> matrix[i][j];
		}
	}
	fin.close();
	return matrix;
}

void showMatrix(int** matrix, int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int findMaxValueOfMatrix(int** matrix, int n, int m) {
	int maxValue = matrix[0][0];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++) {
			if (maxValue < matrix[i][j]) {
				maxValue = matrix[i][j];
			}
		}
	}
	return maxValue;
}

int findMinValueOfMatrix(int** matrix, int n, int m) {
	int minValue = matrix[0][0];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (minValue > matrix[i][j]) {
				minValue = matrix[i][j];
			}
		}
	}
	return minValue;
}

int culcAvgMinValueOfMatrix(int** matrix, int n, int m) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sum += matrix[i][j];
		}
	}
	return sum/n/m;
}