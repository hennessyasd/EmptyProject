#include "Manager.h"

double Manager::calculateAvgAgil(Group& group) {
	double avg = 0;

	for (int i = 0; i < group.size; i++){
		avg += group.list[i].getAgility();
	}

	return avg / group.size;
}


double Manager::calculateAvgStren(Group& group) {
	double avg = 0;

	for (int i = 0; i < group.size; i++) {
		avg += group.list[i].getStrength();
	}

	return avg / group.size;
}


double Manager::calculateAvgIntel(Group& group) {
	double avg = 0;

	for (int i = 0; i < group.size; i++) {
		avg += group.list[i].getIntelligience();
	}

	return avg / group.size;
}