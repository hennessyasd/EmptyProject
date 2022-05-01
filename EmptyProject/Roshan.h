#pragma once
#include "Hero.h";

class Roshan : public Hero {
	private:

		string ability;
	public:
		Roshan();
		Roshan(string name, int power, string clas, int agility, int strength, int intelligience,
		string ability);
		~Roshan();

		string getAbility();
		void setAbility(string ability);

		string getInfo();
	};
