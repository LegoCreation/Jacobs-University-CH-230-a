#include <iostream>
#include "fraction.h"

using namespace std;

int main(void){
	Fraction a;
	Fraction b;
	cin >> a >> b; //overloaded cin
	cout << "First * Second: " << a * b <<endl; //overloaded cout
	cout << "First / Second: " << a / b <<endl; //overloaded cout
	return 0;
}
