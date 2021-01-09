#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
	Complex addition, multi, differ, conj; //classes
	double real, imag;
	cout << "Enter the real part of the first instance ";
	cin >> real;
	cout << "Enter the imaginary part of the first instance ";
	cin >> imag;
	Complex a(real, imag);
	cout << "Enter the real part of the second instance ";
	cin >> real;
	cout << "Enter the imaginary part of the third instance ";
	cin >> imag;
	Complex b(real, imag);
	conj = a.conjugate(); //conjugation
	addition = a.add(b); //addition
	differ = a.diff(b); //difference
	multi = a.mul(b); //multiplication
	cout << "The conjugate is: ";
	conj.print();
	cout << "The addition is: ";
	addition.print();
	cout << "The difference is: ";
	differ.print();
	cout <<"The multiplication is: ";
	multi.print();
	return 0;
}
