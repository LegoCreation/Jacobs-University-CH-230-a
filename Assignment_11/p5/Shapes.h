/* 
Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {// base class
	private:// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
		void setname(const std::string&); //setter
		std::string getname(); //getter
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);
		// usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&); 
		void move(double, double);	// moves the shape
		void setx(double); //setter
		void sety(double); //setter
		double getx(); //getter
		double gety(); //getter
};

class RegularPolygon : public CenteredShape { 
	// a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void seten(int); //setter
		int geten(); //setter
};

class Circle : public CenteredShape {  
	// a Circle is a shape with a center and a radius
	private:
		double Radius; //radius
	public:
		Circle(const std::string&, double, double, double); //parametric
		Circle(); //default
		Circle(const Circle&); //copy constructor
		void setradius(double); //setter
		double getradius(); //getter
		double perimeter(); //perimeter
		double area(); //area
};

class Rectangle: public RegularPolygon{
	private:
		double width, height;
	public:
	Rectangle(const std::string& n, double nx, double ny,
	 double nwidth, double nheight); //parametric
	Rectangle(); //default
	Rectangle(const Rectangle&); //copy constructor
	void setwidth(double); //setter
	void setheight(double); //setter
	double getheight(); //getter
	double getwidth(); //getter
	double perimeter(); //perimeter
	double area(); //area
};

class Square: public RegularPolygon{
	private:
		double side;
	public:
	Square(const std::string& n, double nx,
	 double ny, double nside); //parametric
	Square(); //default
	Square(const Square&); //copy constructor
	void setside(double); //setter
	double getside(); //getter
	double perimeter(); //perimeter
	double area(); //area
};
    
#endif
