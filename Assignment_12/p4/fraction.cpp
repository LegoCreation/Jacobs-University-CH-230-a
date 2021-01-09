#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction(){
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d){
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b){
	int tmp_gcd = 1;
	int x = 0;
	for (;x<=a && x<=b; x++ ){
		if(a%x == 0 && b%x == 0) tmp_gcd = x;
	}

	return tmp_gcd;
}

int Fraction::lcm(int a, int b){
	return a * b / gcd(a, b);

}

//cout overload
ostream& operator<<( ostream& out ,const Fraction& z ){
	out << z.num << "/" << z.den;
	return out;
}

//cin overload
istream& operator>>(istream& in, Fraction& z){
	cout << "Enter numerator: ";
	in >> z.num;
	cout << "Enter denomenator: ";
	in >> z.den;
	if (z.den==0) {
		cout << "Invalid Input. Exiting..." <<endl;
		exit(1);
	}
	return in;
}

//multiplication overload
Fraction Fraction::operator*(const Fraction& a){
	if (this->den == 0 || a.den == 0){
		cout << "Cannot multiply... Undefined" <<endl;
		exit(1);
	}
	Fraction n(this->num * a.num, this->den * a.den);
	return n;
}

//division overload
Fraction Fraction::operator/(const Fraction& a){
	if (this->den == 0 || a.den == 0){
		cout << "Cannot divide... Undefined" <<endl;
		exit(1);
	}
	Fraction b(this->num * a.den, this->den * a.num);
	return b;
}