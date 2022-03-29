//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int i = 2;
//	int number;
//	string quit;
//	bool prime;
//	string msg;
//	string result;
//
//
//	do {
//		cout << "Input number: ";
//		cin >> number;
//
//		do {
//			cout << "Input number: ";
//			cin >> number;
//		} while (number < 0);
//		if (number % i == 0) {
//			prime = false;
//		}
//
//		while (i < number) {
//			if (number % i == 0) {
//				prime = false;
//			}
//			i++;
//
//			if (prime && number > 1) {
//				result = to_string(number) + " is prime number";
//			}
//			else {
//				result = to_string(number) + " is not prime number";
//			}
//		}
//		cout << "Exit?(Yes or No)";
//		cin >> quit;
//		
//	} while (quit != "No" || quit != "no");
//
//	system("pause");
//	return 0;
//}