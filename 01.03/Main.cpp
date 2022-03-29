#include "Header.h"


int main(void) {
	char fileName[] = "d:\\igor\\matrix.txt";

	int n, m;

	int** matrix = initNumbersforMatrix(fileName, &n, &m);

	showMatrix(matrix, n, m);

	cout << "Max Value: " << findMaxValueOfMatrix(matrix, n, m) << endl;
	cout << "Min Value: " << findMinValueOfMatrix(matrix, n, m) << endl;
	cout << "Average Value: " << culcAvgMinValueOfMatrix(matrix, n, m) << endl;

	for (int i = 0; i < n; i++){
		delete[] matrix[i];
	}

	delete[] matrix;
	return 0;
}