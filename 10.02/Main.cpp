#include "Header.h"

int sumNumb(int n) {

	int sum = 0;

	if (n < 10) {
		return n;
	}
	
	return sumNumb(n / 10) + n % 10;
}

int factorial(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * factorial(n - 1);
}

bool stepTwo(int n) {
	int number = 1;

	if (number == 1) {
		return true;
	}else if (number % 2 == 1) {
		return false;
	}else {
		return stepTwo(number / 2);
	}
}

int main() {

	//cout << sumNumb(5) << endl;
	//cout << sumNumb(12345) << endl;

	cout << stepTwo(256);

	return 0;
}