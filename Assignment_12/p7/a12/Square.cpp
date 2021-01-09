#include <iostream>
#include "Square.h"

Square::Square(const char *n, double l) 
					: Rectangle(n, l, l) {
	length = l;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return Rectangle::calcArea();
}

double Square::calcPeri() const {
	std::cout << "calcPeri of Square...";
	return Rectangle::calcPeri();
}