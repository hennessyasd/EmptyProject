#include <iostream>
#include "Student.h"

using namespace std;

int main() {
	Hero alex;

	alex.setName("Alex");
	alex.setAge(15.5);

	int dependency = alex.getAge();

	cout << alex.getInfo() << endl;

	cout << "dependency = " << dependency << endl;

	system("pause");
	return 0;
}
