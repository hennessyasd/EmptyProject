#include "Header.h"

class Students {
	public: 
		string name;
		bool alive;
		int age;
		double mark;
		char sex; //f or m

		Students() {
			cout << "BRUUH" << endl;
			name = "no name";
			mark = 4;
			age = 6;
			sex = 'f';
			alive = true;
		} 

		Students(string initName) {
			name = initName;
			mark = 4;
			age = 6;
			sex = 'f';
			alive = true;
		}

		Students(string initName, bool initAlive,
		int initAge, double initMark, char initSex) {
			name = initName;
			alive = initAlive;
			age = initAge;
			mark = initMark;
			sex = initSex;
		}
		
		~Students(){

		}

		string getInfo() {
			return "age =  " + to_string(age)
				+ "; mark =  " + to_string(mark)
				+ "; sex = " + to_string(sex)
			+"; alive = " + (alive ? "true" : "false");
		}
};