#include "Header.h"
#include "Students.h"
#include "Group.h"

int main(void){
	Group group;

	Students students{};

	Students student1();
	Students student2("Igor");
	Students student3("Igor", true, 16, 5, 'm');

	/*double a,b;*/

	cout << students.getInfo() << endl;
	/*cin >> a >> b;
	cout << a/b + 0.5;*/
	return 0;
}