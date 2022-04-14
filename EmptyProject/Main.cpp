#include <iostream>
#include "Hero.h"
#include "Group.h"

using namespace std;
//
//void changeClas(Hero& hr) {
//	srand(time(NULL));
//	int claS = rand() % 3;
//	switch (claS) {
//	case 1: "Berserk"; break;
//	case 2: "Midder"; break;
//	case 3: "Support"; break;
//	}
//		hr.setClas(claS);
//}

int main() {
	// Этот коммент русский...
	Group groupHeroesIntelligence("Intelligence");
	Group groupHeroesAgility("Agility");
	Group groupHeroesStrength("Strength");

	Hero h1(870, "Tide", "Berserk");
	Hero h2(190, "Bane", "Support");
	Hero h3(570, "Voker", "Midder");
	Hero h4(210, "Phantom Assasin", "Berserk");
	Hero h5(130, "Crystal Maden", "Support");

	groupHeroesAgility.add(h4);
	groupHeroesIntelligence.add(h2);
	groupHeroesIntelligence.add(h3);
	groupHeroesIntelligence.add(h5);
	groupHeroesStrength.add(h1);

	cout << h1.getInfo() << endl;

	/*cout << "Number of heroes:" << h3.getCount() << endl;*/

	system("pause");
	return 0;
}
