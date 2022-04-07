#include "Hero.h"

Hero::Hero() {};

Hero::Hero(int power, string name, string clas) {
	this-> power = power;
	this-> name = name;
	this-> clas = clas;
}

Hero::~Hero() {};

string Hero::getName() {
	return name;
}
void Hero::setName(string name) {
	this-> name = name;
}

int Hero::getPower() {
	return power;
}
void Hero::setPower(int power) {
	do {
		if (power >= 30 && power <= 1000) {
			this->power = power;
		}
	} while (power >= 30 && power <= 1000);
}

void Hero::setClas(string name) {
	this-> clas = name;
}

string Hero::getInfo() {
	return name + ": power = " + to_string(power)
		+ ": class = " + clas;
}