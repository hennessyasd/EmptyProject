#include "Header.h"

void showListStudents(Student* list, int length) {
	for (int i = 0; i < length; i++) {
		cout << list[i].name;

		cout << ": age = " << list[i].age;
		cout << ", mark = " << list[i].mark;
		cout << ", money = " << list[i].money << endl;
	}
}

void initStudents(Student* list, int length) {
	srand(time(0));

	const string NAMES[] {
		"Nikita", "Vanya", "Anton", "Igor", "Ilya", "Kate", "Alex", "Jason", "Victor",
		"Matvey", "Batman", "Ksusha", "Kristina", "Daniil" };

	const int NAME_COUNT = 14;

	const string ALPHABET = "ABCDEFJHIJKLMNOPQRSTUVWXYZ";
	const int ALPHABET_COUNT = 26;

	const int MAX_MARK = 10;
	const int MIN_MARK = 0;

	const int MAX_MONEY = 1000;
	const int MIN_MONEY = 1;

	const int MAX_AGE = 25;
	const int MIN_AGE = 7;

	for (int i = 0; i < length; i++) {
		list[i].name = NAMES[rand() % NAME_COUNT] + " " +
		ALPHABET[rand() % ALPHABET_COUNT] +".";

		list[i].age = rand() % (MAX_AGE - MIN_AGE - 1) + MIN_AGE;
		list[i].mark = rand() % (MAX_MARK - MIN_MARK - 1) + MIN_MARK;
		list[i].money = rand() % (MAX_MONEY - MIN_MONEY - 1) + MIN_MONEY;
	}
}

double getBonus(Student* list, int length){
	double totalSum = 0;

	for (int i = 0; i < length; i++) {
		if (list[i].age < 15 && list[i].money < 100) {
			totalSum += 50;
		}
		else if(list[i].age >= 15 && list[i].money < 100){
			totalSum += 100;
		}
	}

	return totalSum;
}

int getMaxMark(Student* list, int length) {
	int maxMark;

	maxMark = list[0].mark;

	for (int i = 0; i < length; i++) {
		if (list[i].mark > maxMark) {
			maxMark = list[i].mark;
		}
	}
	return maxMark;
}

int getMinMark(Student* list, int length) {
	int minMark;

	minMark = list[0].mark;

	for (int i = 0; i < length; i++) {
		if (list[i].mark < minMark) {
			minMark = list[i].mark;
		}
	}
	return minMark;
}

string getStudentWithMaxAmountOfMoney(Student* list, int length) {
	int index = 0;

	for (int i = 0; i < length; i++) {
		if (list[i].money > list[index].money) {
			index = i;
		}
	}
	return list[index].name;
}

string getStudentWithMinAmountOfMoney(Student* list, int length) {
	int index = 0;

	for (int i = 0; i < length; i++) {
		if (list[i].money < list[index].money) {
			index = i;
		}
	}
	return list[index].name;
}
double getAvgMoney(Student* list, int length) {
	double sum = 0;

	for (int i = 0; i < length; i++) {
		sum += list[i].money;
	}

	return sum / length;
}

string getListOfBestStudents(Student* list, int length) {
	int MaxMark = getMaxMark(list, length);

	int count = 0;

	for (int i = 0; i < length; i++){
		if (list[i].mark = MaxMark) {
			count++;
		}
	}
	string* bestList = new string[count];

	int index = 0;

	for (int i = 0; i < length; i++) {
		if (list[i].mark == MaxMark) {
			bestList[index] = list[i].name;
			index++;
		}
	}
	return bestList[index];
}