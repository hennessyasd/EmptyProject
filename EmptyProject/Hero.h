#include "Header.h"

class Hero {
private:
	static int count;
	int power;
	string name;
	string clas;

public:

	static const int MAX_HERO_POWER = 1000;
	static const int MIN_HERO_POWER = 30;

	int getCount() {};
	Hero();
	Hero(int power, string name, string clas);
	string getName();
	void setName(string n);
	int getPower();
	void setPower(int a);
	void setClas(string n);
	string getInfo();
};