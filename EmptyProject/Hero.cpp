#include "Hero.h"

static int countHeroes = 0;

int Hero::getCount() {
	return countHeroes;
}

Hero::Hero() {
	countHeroes++;
};

Hero::Hero(int power, string name, string clas) {
	this-> power = power;
	this-> name = name;
	this-> clas = clas;
}

Hero::~Hero() {
	countHeroes--;
};

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
		if (power >= MIN_HERO_POWER && power <= MAX_HERO_POWER) {
			this->power = power;
		}
	} while (power >= MIN_HERO_POWER && power <= MAX_HERO_POWER);
}

void Hero::setClas(string name) {
	this-> clas = name;
}

string Hero::getInfo() {
	return name + ": power = " + to_string(power)
		+ ": class = " + clas;
}