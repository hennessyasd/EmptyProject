#include <iostream>
#include <fstream> // ifstream --> input file stream
				   // ofstream --> out file stream
				   // fstream --> in/out file stream
using namespace std;

int main(void) {

	//string s;

	//fout.open("d:\\igor\\text.txt", ios::app);
	////fout.open("text.txt"); // absolutely 

	//if (fout.fail()) {
	//	return -1;
	//}
	//
	//fout << "hello" << endl;

	//fout.close();

	ofstream fout;

	fout.open("d:\\igor\\text.txt", ios::app);

	if (fout.fail()) {
		return -1;
	}

	char buf[100];


	//while (!fout.eof()) {
	//	fout.isdigit(buf, 100) >> buf;
	//	cout << buf << endl;
	//}

	//for ( ) {
	//	cout << buf << endl;
	//}

	fout.close();

	return 0;
}