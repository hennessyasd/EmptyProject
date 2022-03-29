#include <iostream>

using namespace std;

int findMaxNumber(long long);
int findMinNumber(long long);

int main() {

	int number = 12312948;

	int findMaxNumber(long long number, int max, int digit); {
		int max = 9;
		number = (number > 0) ? number : -number;
		while (number > 0) {
			int digit = number %= 10;
			if (digit > max) {
				max = digit;
			}
		}
		number /= 10;
		return max;
	}

	int findMinNumber(long long number, int min, int digit); {
		int min = 0;
		while (number > 0) {
			int digit = number %= 10;
			if (digit > min) {
				min = digit;
			}
		}
		number /= 10;
		return min;
	}

	system("pause");
	return 0;
}