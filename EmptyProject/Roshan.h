#pragma once
#include "Hero.h";

class Roshan : public Hero

class Roshan{
private:
	static int countHeroes;
	int power;
	string name;
	string clas;
	int agility;
	int strength;
	int intelligience;

	int health;
	string ability;

public:

	static const int MAX_HERO_POWER = 1000;
	static const int MIN_HERO_POWER = 30;

	int getCount() {};
	Roshan();
	Roshan(int power, string name, string clas,
	int agility, int strength, int intelligience, int health);
	~Roshan();
	string getName();
	void setName(string name);
	int getPower();
	void setPower(int power);
	string getClas();
	void setClas(string clas);
	int getAgility();
	void setAgility(int agility);
	int getStrength();
	void setStrength(int strength);
	int getIntelligience();
	void setIntelligience(int intelligience);
	string getInfo();

	int getHealth();
	void setHealth(int health);
};

