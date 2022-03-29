#include <iostream>
using namespace std;

int main()
{
	int number;
	int i = 2;


	cout << "Input perfect number: ";
	cin >> number;

	while (i < number) {
		if (number % i == 0) {

		}
		i++;
	}

	system("pause");
	return 0;
}