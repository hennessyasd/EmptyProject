#include <iostream>
#include <ctime>

using namespace std;


struct Student {
	string name;
	int age;
	int mark;
	double money;
};


int getMaxMark(Student* list, int length);
int getMinMark(Student* list, int length);
void showListStudents(Student* list, int length);
void initStudents(Student* list, int length);
double getBonus(Student* list, int length);
string getStudentWithMaxAmountOfMoney(Student* list, int length);
string getStudentWithMinAmountOfMoney(Student* list, int length);
double getAvgMoney(Student* list, int length);
string getListOfBestStudents(Student* list, int length);