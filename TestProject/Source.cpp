#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

class DArray {

public:
	int* arr;
	int size;


	DArray() {
		size = 10;
		arr = new int[size];
	}

	~DArray() {

		delete[] arr;
	}



	void init() {
		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 100;
		}
	}

	string getInfo() {
		string s = "Array: ";

		for (int i = 0; i < size; i++) {
			s += to_string(arr[i]) + " ";
		}
		return s;
	}

};



void test(DArray& arr){
	//...
}


int main() {

	/*DArray darr;

	darr.init();

	test(darr);

	cout << darr.getInfo() << endl;*/

	Point point1(3, 6);
	Point point2(5, 7);

	Point point3 = point1.sum(point2);

	point3 = point1 + point2;
	/*point3 = point1 - point2;
	point3 = point1 * point2;*/

	cout << point1.getInfo() << endl;
	cout << point2.getInfo() << endl;
	cout << point3.getInfo() << endl;


	system("pause");
	return 0;
}