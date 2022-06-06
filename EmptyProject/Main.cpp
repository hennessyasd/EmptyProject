#include "Header.h"
#include "Group.h"
#include "Roshan.h"

void changeClas(Hero& hero) {
	srand(time(NULL));
	string words[3] = { (char*)"Midder", (char*)"Support", (char*)"Berserk" };
	string clas = words[rand() % 3];

	hero.setClas(clas);
}

int main() {
	Group groupHeroesIntelligence("Intelligence");		// heroes of intel group
	Group groupHeroesAgility("Agility");		// heroes of agil group
	Group groupHeroesStrength("Strength");		// heroes of stren group

	Hero h1("tide", 870, "berserk", 23, 30, 12);
	Hero h2("bane", 190, "support", 15, 19, 25);
	Hero h3("voker", 570, "midder", 15, 21, 29);
	Hero h4("phantom assasin", 210, "carry", 30, 16, 18);
	Hero h5("crystal maden", 130, "support", 14, 16, 27);

	groupHeroesAgility.add(h4);
	groupHeroesIntelligence.add(h2);
	groupHeroesIntelligence.add(h3);
	groupHeroesIntelligence.add(h5);
	groupHeroesStrength.add(h1);

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "|" << groupHeroesAgility.getInfo() << "|" << endl;
	cout << "|" << groupHeroesStrength.getInfo() << "|" << endl;
	cout << "|" << groupHeroesIntelligence.getInfo() << "|" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	/*cout << "The ROSHAN has got ability: " << rosh.getAbility() << endl;*/
	
	system("pause");

	return 0;
}

