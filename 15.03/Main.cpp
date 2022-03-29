#include "Plane.h"

int main(void) {

	Plane plane1{};

	plane1.brand = "Boing";
	plane1.model = "132-141";
	plane1.passenger = 400;
	plane1.speed = 800;
	plane1.price = 10449.99;
	plane1.cost();

	cout << plane1.info() << endl;

	system("pause");
	return 0;
}