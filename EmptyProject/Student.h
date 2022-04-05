#include "Header.h"

class Hero {
private:
	int age;
	string name;
	string clas;

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

	void setClas(string n) {
		clas = n;
	}

	string getInfo() {
		return name + ": age = " + to_string(age) 
			+ ": class = " + clas;
	}



	//Hero(){
	//	name = "Tide"
	//	age = "153";
	//	clas = "berserk"
	//}
	//~Hero() {

	//}
};