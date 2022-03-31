#include "Header.h"

class Student {
private:
	int age;
	string name;


public:
	string getName() {
		return name;
	}
	void setName(string n) {
		name = n;
	}

	int getAge() {
		return age;
	}
	void setAge(int a) {
		if (a >= 15 && a <= 70) {
			age = a;
		}
	}

	string getInfo() {
		return name + ": age = " + to_string(age);
			//+ " ; name = " + name;
	}
};