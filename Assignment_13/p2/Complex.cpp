/*
CH-230-A
a13_p2.c
Shishir Sunar
ssunar@jacobs-university.de
*/
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

//plus overload
Complex Complex::operator+(const Complex& a){
	Complex b(this->real+a.real, this->imag+a.imag);
	return b;
}
//minus overload
Complex Complex::operator-(const Complex& a){
	Complex b(this->real-a.real, this->imag-a.imag);
	return b;
}
//multiplication overload
Complex Complex::operator*(const Complex& a){
	Complex b(real*a.real - imag*a.imag, real*a.imag+imag*a.real);
	return b;
}

//assginment overload
Complex& Complex::operator=(const Complex& a){
	this->real = a.real;
	this->imag = a.imag;
	return *this;
}

//output stream overload
ostream& operator<<(ostream& out, const Complex& a){
	out << a.real << showpos << a.imag << noshowpos<<"i";
	return out;
}


//input stream overload
istream& operator >>(istream& in, Complex &c1)
{
    double real;
	int k = 1;
    in >> real;
    c1.setreal(real);
	char ch;
	in >> ch; //get the sign character
	if (ch=='-') k = -1;
    double imaginary;
    in >> imaginary;
    c1.setimag(imaginary*k);
	in >> ch; //get the character 'i'
    return in;
}