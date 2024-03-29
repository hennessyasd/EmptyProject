#include "Roshan.h"

Roshan::Roshan() : Hero() {
	ability = "Bash";

};

Roshan::Roshan(string name, int attack, string clas, int agility, int strength, int intelligience,
	string ability) : Hero(name, attack, clas, agility, strength, intelligience) {

	this->ability = ability;
};

Roshan::~Roshan(){};

string Roshan::getAbility() {
	return ability;
};

void Roshan::setAbility(string ability) {
	this->ability = ability;
};

string Roshan::getInfo() {
	return Hero::getInfo() + "; Ability = " + ability;
};