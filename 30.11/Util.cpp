#include <iostream>
#include <ctime>

#define maximum 20

using namespace std;

void randInit(int* array, int length);
void showArrayMembers(int* array, int length, int n);

void randInit(int* array, int length) {
	srand(time(NULL));
	for (int i = 0; i < length; i++){
		array[i] = rand() % (maximum + 1);
	}

}


void showArrayMembers(int* array, int length,int n) {
	for (int i = 0; i < length; i++) {
		cout << array[i] << " ";
	}
}