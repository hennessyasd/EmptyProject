#pragma once
#include "Hero.h";

class Roshan : public Hero {
	private:

		string ability;
	public:
		Roshan();
		//Roshan::Roshan(string name, int power, string clas, string ability);
		~Roshan();

		int getAbility();
		void setAbility(string ability);

		string getInfo();
	};
