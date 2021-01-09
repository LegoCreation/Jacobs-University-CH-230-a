/*
CH-230-A
a13_p2.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"
#include <fstream>
using namespace std;

int main() {
	Complex addition, multi, differ; //classes
	ifstream src1("in1.txt", ios::binary); //file open
	//input file format (double)(char)(double)(char)(EOF)
	//e.g. 2.6+5.8i
	ifstream src2("in2.txt", ios::binary); //file open
	if (!src1.good()||!src2.good()){ //if bad opening
        cerr << "Error opening files" << endl;
        exit(1);
    }
	Complex a, b;
	src1 >> a;
	src2 >> b;
	addition = a + b;
	multi = a * b;
	differ = a - b;
	ofstream dst("output.txt", ios::binary); //write mode
	if (!dst.good()){ //if non writable
		cerr<< "Error writing files" << endl;
		exit(1);
	}
	cout << "Addition: " << addition << endl;
	cout << "Multiplication: " << multi << endl;
	cout << "Difference: " << differ << endl;
	dst << addition <<endl << multi << endl << differ;
	src1.close();
	src2.close();
	dst.close();
	return 0;
}
