#include <iostream>
#include "Header.h"

int main() {
	int size;

	do {
		cout << "Input size of students: " ;
		cin >> size;
	} while (size <= 0);

	Student* list = new Student[size];

	initStudents(list, size);
	showListStudents(list, size);

	double total = getBonus(list, size);
	cout << "Total money: "<< total << endl;

	int totalMaxMark = getMaxMark(list, size);
	cout << "Max mark is " << totalMaxMark << endl;

	int totalMinMark = getMinMark(list, size);
	cout << "Min mark is " << totalMinMark << endl;

	cout << "Student with much money is " << getStudentWithMaxAmountOfMoney(list, size) << endl;
	cout << "Student with few money is " << getStudentWithMinAmountOfMoney(list, size) << endl;
	cout << "Student with average money is " << getAvgMoney(list, size) << endl;

	string* bestList = getListOfBestStudents(list, size);

	for (int i = 0; i < size; i++){
		cout << "The list of best students: " << bestList[i] << endl;
	}

	delete[] bestList;
	delete[] list;

	return 0;
}