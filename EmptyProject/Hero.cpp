#include "Hero.h"

int Hero::countHeroes = 0;

int Hero::getCount() {
	return countHeroes;
}

Hero::Hero() {
	countHeroes++;
	name = "noname";
	attack = 0;
	clas = "undefind";
	agility = 0;
	strength = 0;
	intelligience = 0;
};

Hero::Hero(string name, int attack,string clas, int agility, int strength, int intelligience) {
	countHeroes++;
	this->name = name;
	this->attack = attack;
	this->clas = clas;
	this->agility = agility;
	this->strength = strength;
	this->intelligience = intelligience;
}

Hero::~Hero() {
	countHeroes--;
};



string Hero::getName() {
	return name;
}
void Hero::setName(string name) {
	this->name = name;
}



int Hero::getAttack() {
	return attack;
}
void Hero::setAttack(int attack) {
	do {
		if (attack >= MIN_HERO_POWER && attack <= MAX_HERO_POWER) {
			this->attack = attack;
		}
	} while (attack >= MIN_HERO_POWER && attack <= MAX_HERO_POWER);
}



string Hero::getClas() {
	return clas;
}
void Hero::setClas(string name) {
	this->clas = name;
}



int Hero::getAgility() {
	return agility;
}
void Hero::setAgility(int agility) {
	this->agility = agility;
}



int Hero::getStrength() {
	return strength;
}
void Hero::setStrength(int strength) {
	this->strength = strength;
}



int Hero::getIntelligience() {
	return intelligience;
}
void Hero::setIntelligience(int intelligience) {
	this->intelligience = intelligience;
}



string Hero::getInfo() {
	return name + ": Hero's attack = " + to_string(attack)
		+ ": class = " + clas
		+ ": his agility = " + to_string(agility)
		+ ": his strength = " + to_string(strength)
		+ ": his intelligience = " + to_string(intelligience)
		+ "\n";
}