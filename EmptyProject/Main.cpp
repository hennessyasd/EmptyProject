#include "Header.h"
#include "Group.h"

/* Hero(int power, string name, string clas, int agility, int strength, int intelligience)*/

void changeClas(Hero& hero) {
	srand(time(NULL));
	string words[3] = { (char*)"Midder", (char*)"Support", (char*)"Berserk" };
	string clas = words[rand() % 3];

	hero.setClas(clas);
}

int main() {
	/* Этот коммент русский...*/
	Group groupHeroesIntelligence("Intelligence");		// Heroes of intel group
	Group groupHeroesAgility("Agility");		// Heroes of agil group
	Group groupHeroesStrength("Strength");		// Heroes of stren group

	Hero h1(870, "Tide", "Berserk", 23, 30, 12);
	Hero h2(190, "Bane", "Support", 10, 19, 22);
	Hero h3(570, "Voker", "Midder", 15, 21, 28);
	Hero h4(210, "Phantom Assasin", "Berserk", 30, 16, 18);
	Hero h5(130, "Crystal Maden", "Support", 8, 16, 27);

	groupHeroesAgility.add(h4);
	groupHeroesIntelligence.add(h2);
	groupHeroesIntelligence.add(h3);
	groupHeroesIntelligence.add(h5);
	groupHeroesStrength.add(h1);


	cout << groupHeroesAgility.getInfo() << endl;
	cout << groupHeroesStrength.getInfo() << endl;
	cout << groupHeroesIntelligence.getInfo() << endl;

	system("pause");
	return 0;
}
