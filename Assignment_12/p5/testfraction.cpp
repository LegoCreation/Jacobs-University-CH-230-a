#include <iostream>
#include "fraction.h"

using namespace std;

int main(void){
	Fraction a, b, sum, diff;
	cin >> a >> b; //overloaded cin
	cout << (a>b ? "First is greater" : "Second is greater") << endl;
	sum = a + b; //sum
	diff = a - b; //difference
	diff = a;
	a = b;
	cout << "First + Second: " << sum <<endl; //overloaded cout
	cout << "First - Second: " << diff <<endl; //overloaded cout
	return 0;
}
