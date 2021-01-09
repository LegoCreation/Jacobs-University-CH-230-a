// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 
//shape implementations
Shape::Shape(const string& n) : name(n) {
}

Shape::Shape():name("default"){}

void Shape::setname(const string& a){
	name = a;
}

string Shape::getname(){
	return name;
}

void Shape::printName() const {
	cout << name << endl;
}

//centershape //implementations
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape():x(0), y(0) {}

CenteredShape::CenteredShape(const CenteredShape& a){
	x = a.x;
	y = a.x;
	
}

void CenteredShape::setx(double newx){
	x = newx;
}

void CenteredShape::sety(double newy){
	y = newy;
}

double CenteredShape::getx(){
	return x;
}

double CenteredShape::gety(){
	return y;
}

//regular polygon implementations
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon():EdgesNumber(3){}

RegularPolygon::RegularPolygon(const RegularPolygon& a){
	EdgesNumber = a.EdgesNumber;
}

void RegularPolygon::seten(int a){
	EdgesNumber = a;
}

int RegularPolygon::geten(){
	return EdgesNumber;
}

//circle implementations
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Circle::Circle():Radius(0) {}

Circle::Circle(const Circle& a): Radius(a.Radius) {}

void Circle::setradius(double a){
	Radius = a;
}

double Circle::getradius(){
	return Radius;	
}

double Circle::perimeter(){
	return 2*Radius*M_PI;
}

double Circle::area(){
	return Radius*Radius*M_PI;
}

//rectangle implementations
Rectangle::Rectangle(const string& n, double nx,
 double ny, double nwidth, double nheight): RegularPolygon(n, nx, ny, 4){
	 width = nwidth;
	 height = nheight;
}

Rectangle::Rectangle(){
	height = 0;
	width  = 0;
}

Rectangle::Rectangle(const Rectangle& a){
	height = a.height;
	width = a.width;
}

void Rectangle::setheight(double a){
	height = a;
}

void Rectangle::setwidth(double a){
	width = a;
}

double Rectangle::getheight(){
	return height;
}

double Rectangle::getwidth(){
	return width;
}

double Rectangle::perimeter(){
	return 2*(width+height);
}

double Rectangle::area(){
	return width*height;
}

//square implementations
Square::Square(const string& n, double nx, double ny, double nside):
 RegularPolygon(n,nx,ny,4), side(nside){}

Square::Square():side(0){}

Square::Square(const Square& a):side(a.side){}

double Square::perimeter(){
	return 4 * side;
}

double Square::area(){
	return side * side;
}

void Square::setside(double s){
	side = s;
}

double Square::getside(){
	return side;
}
