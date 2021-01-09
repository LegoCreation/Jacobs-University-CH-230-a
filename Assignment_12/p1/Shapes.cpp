// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include "math.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}
 
Shape::Shape(){}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny):
 Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape(): x(0), y(0){}

RegularPolygon::RegularPolygon(){
	EdgesNumber = 3;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny,
 int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) {
	Radius = r;
}

Circle::Circle(): Radius(0){}

//Hexagon implementations
Hexagon::Hexagon(const string& n, double nx, double ny, double nside):
 RegularPolygon(n,nx,ny,4), side(nside){}

Hexagon::Hexagon():side(0){}

Hexagon::Hexagon(const Hexagon& a):side(a.side){}

double Hexagon::perimeter(){
	return 6 * side;
}

double Hexagon::area(){
	return side * side * 3 * sqrt(3) / 2;
}

double Hexagon::getside(){
	return side;
}

void Hexagon::setside(double s){
	side = s;
}