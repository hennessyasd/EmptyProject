#include <iostream>
#include <ctime>

using namespace std;

int main(void) {
	srand(time(0));

	const char* wrds[] = { "rainbow", "earth", "spirit", "storm", "tinker"};

	const int WORDS_COUNT = 5;


	int index = rand() % WORDS_COUNT;

	char word[10];

	strcpy_s(word, wrds[index]);

	for (int i = 0, n = strlen(word); i < n; i++) {
		int g = rand() % n;
		char temp = word[i];
		word[i] = word[g];
		word[g] = temp;

	}

	cout << "Guess a word: " << word << endl;

	char g_word[10];
	cin >> g_word;

	cout << strcmp(g_word, wrds[index]) << endl;

	return 0;
}