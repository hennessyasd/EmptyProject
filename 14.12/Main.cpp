#include <iostream>

using namespace std;

void showArrayElements(int* array, int length);
int swapMinWithMax(int* array, int length);

int main() {
	int n;

	int numbers;

	do {
		cout << "Enter numbers in array: ";
		cin >> n;
		cout << "Enter numbers: ";
		cin >> numbers;


		if (n < 0) {
			cout << "Enter numbers in array: ";
			cin >> n;
		}
		if (numbers < 0) {
			cout << "Enter numbers: ";
			cin >> numbers;
		}

		int array[]{ n };



		system("pause");
		return 0;
	} while (n > 50);
}
