#include "Header.h"

class Plane {
	public: 
		string brand;
		string model;
		double price;
		double speed;
		int passenger;

		double cost() {
			return price / passenger;
		}

	string info() {
		return "Plane: brand = " + brand + "; model = " + model + "; passenger = "
			+ to_string(passenger) + "; speed = " 
			+ to_string(speed) + "; price = " 
			+ to_string(price);
	}
};