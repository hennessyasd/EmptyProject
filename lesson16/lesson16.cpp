#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

int main(){
	int min;
	int max;
	string quit;
	string msg;
	srand(time(NULL));

	do {
		int timer = 10;
		while (timer > 0) {
			system("cls");
			cout << "Let's start in: " << timer-- << endl;
			Sleep(100);
		}
		do {
			cout << "Input min value: ";
			cin >> min;
			cout << "Input max value: ";
			cin >> max;
			system("cls");
		} while (min == max);

		if (min > max) {
			int def = min;
			max = min;
			min = def;
		}

		int rnd;
		rnd = (rand() % (max - min + 1)) + min;

		int temp;
		do {
			cout << "Print your number: ";
			cin >> temp;

			if (temp > rnd) {
				msg = "Number bigger than mine...";
			}
			else if (temp < rnd) {
				msg = "Number is less than mine...";
			}
			else if (temp == 0) {
				break;
			}
			else {
				msg = "You are right!\n";
			}

			cout << msg;

		} while (temp != rnd);


		cout << "Do you wanna quit from game ?" << endl;
		cin >> quit;
		system("cls");

	} while(quit != "Yes" ||  quit != "yes");


	system("pause");
	return 0;
}
