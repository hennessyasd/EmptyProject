#include "Header.h"

class Hero {
private:
	int age;
	string name;
	string clas;

public:
	Hero(int a, string n, string c);
	string getName();
	void setName(string n);
	int getAge();
	void setAge(int a);
	void setClas(string n);
	string getInfo();
};