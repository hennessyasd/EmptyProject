#include <iostream>
#include <string>

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

	DArray darr;

	darr.init();

	test(darr);

	cout << darr.getInfo() << endl;

	system("pause");
	return 0;
}