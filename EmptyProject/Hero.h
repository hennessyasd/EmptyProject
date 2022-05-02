#include "Header.h"

class Entity {
public:
	
	Entity() {};
	~Entity() {};
};

class Hero : public Entity{
	/*friend void changeClas(Hero& hero);*/

private:
	static int countHeroes;

protected:

	int power;
	string name;
	string clas;
	int agility;	// for heroes only
	int strength;
	int intelligience;

public:

	static const int MAX_HERO_POWER = 1000;
	static const int MIN_HERO_POWER = 30;

	int getCount();
	Hero();
	Hero(string name, int power,string clas, int agility, int strength, int intelligience);
	~Hero();
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
};