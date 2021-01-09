#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1)
	//array of object named list is being created
	//from class Area
	int index = 0;								// (2)
	//the index of the array is set to zero
	//as we start count from 0 in computer world
	double sum_area = 0.0;						// (3)
	//initializing the sum variable with the value zero
	double sum_peri = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	//Creates an object named BLUE with outer radius 5
	//and inner radius 2 from the class Ring
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square turquoise_square("TURQUOISE", 70);
	list[1] = &yellow_circle;					// (5)
	//the virtual function is pointing towards the
	//virtual functions of the base class blue_circle.
	//In this context the calcArea() will be called from
	//the circle class instead of Area class
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &turquoise_square;
	while (index < num_obj) {					// (7)
	//the loop is for calculating the area of all objects
	//that were in the list and print them sequentially
	//as list[0] is only class area so its area value would
	//be zero.
		(list[index])->getColor();
		double peri = list[index]->calcPeri();				
		double area = list[index++]->calcArea();// (8)
		//calculates the area of the particular object and
		//stores it in the area variable
		sum_area += area;
		sum_peri += peri;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
			//prints the sum of the all objects.
	cout << "The total perimeter is "
			<< sum_peri << " units " << endl;	
			
	return 0;
}


/* How this class works
					-------------
				   | Class Area  |						^
				    -------------						^
						  |								|
						  |								|	
			------------------------------				|
		    |							 |				|
			|                            |				|
	-----------------          --------------------		|
   | Class Rectangle |        |    Class Circle    |	|
    -----------------          --------------------		|
            |                            |				|
			|							 |				|
	------------------		   ---------------------	|
   |   Class Square   |		  |      Class Ring     |	|
	------------------		   ---------------------	|
*/