#include "Group.h"

Group::Group() {
	name = "No group name";
	size = 0;
	list = NULL;
};
Group::Group(string name) {
	this->name = name;
	size = 0;
	list = NULL;
};
Group::Group(string name, Hero* list, int size) {
	this->name = name;
	this->list = list;
	this->size = size;
};
Group::~Group() {

	if (list != NULL) {
		delete[] list;
	}

};
Hero Group::get(int index) {
	if (list == NULL || index < 0 || index >= size) {
		return Hero("not selected", 0, "undefined", 0, 0, 0);
	}else {
		return list[index];
	}
};
int Group::getSize() {
	return size;
};


string Group::getName() {
	return name;
};
void Group::setName(string name) {
	this->name = name;
};


string Group::getInfo() {

	if (list == NULL || size == 0) {
		return "Group " + name + ":\n";
	}

	string msg = "All heroes: " + name + ":\n";

	for (int i = 0; i < size; i++) {
		msg += list[i].getInfo() + "\n";
	}
	return msg;
};

void Group::add(Hero hero) {
	if (list == NULL) {
		list = new Hero[1];
		list[0] = hero;
		size = 1;
	}
	else {
		Hero* temp = new Hero[size + 1];

		for (int i = 0; i < size; i++) {
			temp[i] = list[i];
		}
		temp[size] = hero;
		size++;

		delete[] list;
		list = temp;
	}
};