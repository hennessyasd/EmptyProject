using namespace std;

int factorial(int number);
int fibanachi(int n);

int factorial(int number) {
	// base case
	if (number <= 1) {
		return 1;
	}
	// recursive case
	return number * factorial(number - 1);
}

int fibanachi(int n) {
	if (n = 2) {
		return n - 1;
	}
	return fibanachi(n - 1) + fibanachi(n - 2);
}