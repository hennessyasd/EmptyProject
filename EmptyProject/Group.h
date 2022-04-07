#include "Hero.h"

class Group {
private:
	string name;
	int size;
	Hero* list;
public:
	Group();
	Group(string name);
	Group(string name, Hero* list, int size);
	~Group();
	void add(Hero hero);
		Hero get(int index);
		int getSize();
		string getName();
		void setName(string name);

		string getInfo();
};

