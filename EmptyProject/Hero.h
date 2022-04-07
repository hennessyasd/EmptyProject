#include "Header.h"

class Hero {
private:
	int age;
	string name;
	string clas;

public:
	Hero(int age, string name, string clas);
	string getName();
	void setName(string n);
	int getAge();
	void setAge(int a);
	void setClas(string n);
	string getInfo();
};