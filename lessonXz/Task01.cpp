#include <iostream>

using namespace std;

int main() {
	int i = 0, j = 1;
	int fullNumb = 10;

	string msg = "";

	while (j <= fullNumb, j++) {
		while (i <= fullNumb, i++) {
			msg += to_string(i * j) + "\t";
			msg += "/n";
			}
		}
	cout << msg << endl;
	}

	system("pause");
	return 0;