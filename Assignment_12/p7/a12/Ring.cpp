#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring...";
	double p = (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
	return -p*(p<0)+p*(p>0);
}

double Ring::calcPeri() const {
	std::cout << "calcPeri of Ring...";
	return (Circle::calcPeri()+
		(2 * innerradius * M_PI));
}
