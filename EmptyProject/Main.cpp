#include <iostream>
#include "Hero.h"
#include "Group.h"

using namespace std;

int main() {
	// Этот коммент - русский
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

	system("pause");
	return 0;
}
