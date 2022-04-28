#include "Roshan.h"

Roshan::Roshan() {
	name = "Roshan";
	power = "158";
	clas = "Creep";
	ability = "Bash";
}

//Roshan::Roshan(string name, int power, string clas, string ability) {
//	this->name = name;
//	this->power = power;
//	this->clas = clas;
//	this->ability = ability;
//}

Roshan::~Roshan();

int Roshan::getAbility() {
	return ability;
};

void Roshan::setAbility(string ability) {
	this->ability = ability;
};

string getInfo() {
	return Hero::getInfo(); +
		"; Ability = " + ability;
};