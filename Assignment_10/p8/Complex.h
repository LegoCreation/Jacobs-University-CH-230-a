
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
	
	Complex conjugate(); //conjugate
	Complex add(Complex); //addition
	Complex diff(Complex); //difference
	Complex mul(Complex); //multiplication
	void print();              // prints it to the screen
};
