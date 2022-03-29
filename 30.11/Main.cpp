#include <iostream>

#define SIZE 50

using namespace std;

void randInit(int* array, int length);
void showArrayMembers(int* array, int length,int n);
bool checkValueElement(int* array, int length, int value);
int findFirstElement(int* array, int length, int value);
int findLastElement(int* array, int length, int value);
void bubbleSorting(int* array, int size);
void insertedSort(int* array, int size);
int swapMinWithMax(int* array, int length,int n);


int main() {
	int n = 0;

		int array[SIZE];


		cout << "Enter numbers in array: ";
		cin >> n;


		for (int i = 0; i < n; i++){
			cout << array[i];
		}


		if (n < 0) {
			cout << "Enter numbers: ";
			cin >> array[n];
		}

		/*randInit(array, SIZE);*/

		cout << "\nArray el-ts: " << array <<endl;
		cout << "\n"; 
		swapMinWithMax(array, SIZE,n);
		cout << array;
		cout << "\n";
	//cout << "#1 Sorting: ";
	/*selectSort(array, SIZE);*/

	//cout << "#2 Sorting: ";
	//bubbleSorting(array, SIZE);

	//cout << "#3 Sorting:";
	//insertedSort(array, SIZE);

	//showArrayMembers(array, SIZE);


	//int res_index = 7;

	//int res_index = findFirstElement(array, SIZE, value);
	//cout << "\n\nFirst index: " << res_index << endl;

	//int value = 7;
	//bool res = checkValueElement(array, SIZE, value);
	//
	//cout << "\n\nResault: " << (res ? "Yes" : "No") << endl;

	return 0;
}