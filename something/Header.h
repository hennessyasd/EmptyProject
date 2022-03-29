#include <iostream>
#include <fstream>

#define SIZE 26

using namespace std;

struct alphabet {
	char symbol;
	int counter;
};

void showAlphabet(alphabet* array);
void initAlphabet(alphabet* array);
void readFile(alphabet* array, char* fileName);
void sortAlphabet(alphabet* array);
void writeAlphabet(alphabet* array, char* fileName);