#include "Hero.h"

class Group{
private:

	string name;
	string size;
	Hero* list;
public:
	Group();
	Group(string name);
	Group(string name, Hero* list, int size);
	void add(Hero hero) {
		Hero get(int index);
		/*int getSize() {

		}
		string getInfo() {

		}*/
	}
};

