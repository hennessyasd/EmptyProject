#include <iostream>
#include <string>

using namespace std;

int main(){
	cout << "Enter number: ";
	long int number;
	cin >> number;


	long int newnumb = 0;
	long int original = number;
	string res;


	while(number > 9) {
		newnumb += number % 10;
		newnumb *= 10;
		number /=10;
	}

	newnumb += number;

	res = (newnumb == original)
		? "Its polindrom\n" : "it is not polindrom\n";
	cout << res;

	system("pause");
	return 0;
}
