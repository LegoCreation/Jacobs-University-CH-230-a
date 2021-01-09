// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {
private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	friend std::ostream& operator<<(std::ostream& out ,const Fraction& z );
	//cout overload
	friend std::istream& operator>>(std::istream& in , Fraction& z );
	//cin overload
	Fraction operator*(const Fraction&); //multiply overload
	Fraction operator/(const Fraction&); //divide overload

};


#endif /* FRACTION_H_ */
