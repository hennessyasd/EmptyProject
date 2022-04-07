#include "Header.h"

class Hero {
private:
	int power;
	string name;
	string clas;

public:
	Hero();
	Hero(int power, string name, string clas);
	string getName();
	void setName(string n);
	int getPower();
	void setPower(int a);
	void setClas(string n);
	string getInfo();
};