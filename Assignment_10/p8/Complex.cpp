#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex() {  // sets everything to 0
	real = imag = 0;
}
Complex::Complex(double r, double i) {
	real = r;
	imag = i;
}

Complex::Complex(const Complex& a){
	imag = a.imag;
	real = a.real;
}

Complex::~Complex(){} //destructor


void Complex::print() {
	if (imag) {
		cout << noshowpos << real << showpos << imag << "i" <<
		 noshowpos << endl;
	} else {
		cout << real << endl;
	}

}

//addition
Complex Complex::add(Complex a){
	Complex b(a);
	b.real += real;
	b.imag += imag;
	return b;
}

//conjugation
Complex Complex::conjugate(){
	Complex b(real, imag*-1);
	return b;
}

//difference
Complex Complex::diff(Complex a){
	Complex b(a);
	b.real -= real;
	b.imag -= imag;
	return b;
}

//multiplication
Complex Complex::mul(Complex a){
	Complex b(real*a.real - imag*a.imag, real*a.imag + imag*a.real);
	return b;
}
