#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char str[255];
	char words[20][15];
	// char str[] = {"H","e","l","l","o","!","\0"} 
	// cout << sizeof(str); 7 byte

	cout << "Enter  string: \n";
	cin.getline(str, 255);
	char* s = strtok(str, ". !?,");

	int i = 0;

	while (s != nullptr) {
		strcpy(words[i], s);
		s = strtok(NULL, " .,!?");
		i++;
	}

	for (int j = 0; j < i; j++) {
		cout << words[j] << endl;
	}

	for (int j = i - 1; j >= 0; j--) {
		for (int n = 0; n < j; n++){
			if (strcmp(words[n], words[n + 1] )> 0) {
				swap(words[n], words[n + 1]);
			}
		}
	}

	for (int j = 0; j < i; j++) {
		cout << words[j] << endl;
	}

	system("pause");
	return 0;
}