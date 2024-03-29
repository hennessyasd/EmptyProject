#include "Header.h"

class Hero {
	friend void changeClas(Hero& hero);

private:
	static int countHeroes;

protected:

	int attack; 
	string name;
	string clas;
	int agility;	// this is characteristics only for heroes 
	int strength;
	int intelligience;

public:

	static const int MAX_HERO_POWER = 1000;
	static const int MIN_HERO_POWER = 30;

	Hero();
	Hero(string name, int attack,string clas, int agility, int strength, int intelligience);
	~Hero();

	string getName();
	void setName(string name);
	int getAttack();
	void setAttack(int power);
	string getClas();
	void setClas(string clas);
	int getAgility();
	void setAgility(int agility);
	int getStrength();
	void setStrength(int strength);
	int getIntelligience();
	void setIntelligience(int intelligience);

	static int getCount();

	virtual string getInfo();
};