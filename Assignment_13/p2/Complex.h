/*
CH-230-A
a13_p2.c
Shishir Sunar
ssunar@jacobs-university.de
*/
class Complex {

private:
	double real;  // real part
	double imag;  // imaginary part

public:
	Complex();                 // empty constructor
	Complex(double, double = 0); // constructor taking values for real and
							   // imaginary parts. Imaginary defaults to 0
	Complex(const Complex&); //copy constructor
	~Complex(); //destructor
	inline void setreal(double a){real = a;}
	inline void setimag(double a){imag = a;}
	inline double getreal(){return real;}
	inline double getimag(){return imag;}
	Complex conjugate(); //conjugate
	Complex add(Complex); //addition
	Complex diff(Complex); //difference
	Complex mul(Complex); //multiplication
	void print();              // prints it to the screen
	//operator overloads
	Complex operator+(const Complex&); //plus overload
	Complex operator-(const Complex&); //minus overload
	Complex operator*(const Complex&); //multi overload
	Complex& operator=(const Complex&); //assignment overload
	friend std::ostream& operator<<(std::ostream& out, const Complex&);
	//out stream overload
	friend std::istream& operator>>(std::istream& in, Complex&);
	//input stream overload

};
