#include "Hero.h"

Hero::Hero(int age, string name, string clas) {
	this-> age = age;
	this-> name = name;
	this-> clas = clas;
}

Hero::~Hero() {
	
};

string Hero::getName() {
	return name;
}
void Hero::setName(string name) {
	this-> name = name;
}

int Hero::getAge() {
	return age;
}
void Hero::setAge(int age) {
	if (age >= 15 && age <= 70) {
		this-> age = age;
	}
}

void Hero::setClas(string name) {
	this-> clas = name;
}

string Hero::getInfo() {
	return name + ": age = " + to_string(age)
		+ ": class = " + clas;
}