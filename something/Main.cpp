#include "Header.h"

int main(void) {
	char fileName[] = "d:\\igor\\in.txt";
	char fileName2[] = "d:\\igor\\out.txt";

	alphabet array[SIZE];

	readFile(array,fileName);
	initAlphabet(array);
	sortAlphabet(array);
	showAlphabet(array);
	writeAlphabet(array, fileName2);

	system("pause");
	return 0;
}