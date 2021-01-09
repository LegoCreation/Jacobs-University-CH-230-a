#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
#include <random>

const int num_obj = 4;
int main() {
	//random device
    random_device r;
    mt19937 gen(r());
    uniform_int_distribution<int> unif_RV(1, 4);
    random_device r1;
    mt19937 gen1(r1());
    uniform_int_distribution<int> unif_RV1(5, 100);

	Area *a[num_obj]; //Area list of pointer
	int shape, color;
	for (int i=0; i<4; i++){
		shape = unif_RV(gen);
		switch (shape){
		case 1: //square
			color = unif_RV(gen);
			if (color == 1){ //red
				a[i] = new Square("RED", unif_RV1(gen));
			}
			else if (color == 2){ //blue
				a[i] = new Square("BLUE", unif_RV1(gen));
			}
			else if (color == 3){ //black
				a[i] = new Square("BLACK", unif_RV1(gen));
			}
			else if (color == 4){ //violet
				a[i] = new Square("VIOLET", unif_RV1(gen));
			}
			break;
		case 2: //rectangle
			color = unif_RV(gen);
			if (color == 1){ //red
				a[i] = new Rectangle("RED", unif_RV1(gen), unif_RV1(gen));
			}
			else if (color == 2){ //blue
				a[i] = new Rectangle("BLUE", unif_RV1(gen), unif_RV1(gen));
			}
			else if (color == 3){ //black
				a[i] = new Rectangle("BLACK", unif_RV1(gen), unif_RV1(gen));
			}
			else if (color == 4){ //violet
				a[i] = new Rectangle("VIOLET", unif_RV1(gen),  unif_RV1(gen));
			}
			break;
		case 3: //circle
			color = unif_RV(gen);
			if (color == 1){ //red
				a[i] = new Circle("RED", unif_RV1(gen));
			}
			else if (color == 2){ //blue
				a[i] = new Circle("BLUE", unif_RV1(gen));
			}
			else if (color == 3){ //black
				a[i] = new Circle("BLACK", unif_RV1(gen));
			}
			else if (color == 4){ //violet
				a[i] = new Circle("VIOLET", unif_RV1(gen));
			}
			break;
		case 4: //ring
			color = unif_RV(gen);
			if (color == 1){ //red
				a[i] = new Ring("RED", unif_RV1(gen), unif_RV1(gen));
			}
			else if (color == 2){ //blue
				a[i] = new Ring("BLUE", unif_RV1(gen), unif_RV1(gen));
			}
			else if (color == 3){ //black
				a[i] = new Ring("BLACK", unif_RV1(gen), unif_RV1(gen));
			}
			else if (color == 4){ //violet
				a[i] = new Ring("VIOLET", unif_RV1(gen), unif_RV1(gen));
			}
			break;
		}					
		double peri = (a[i])->calcPeri();				
		double area = (a[i])->calcArea();
		cout << "\nThe area is "
				<< area << " units " << endl;	// (9)
				//prints the sum of the all objects.
		cout << "The perimeter is "
				<< peri << " units " << endl;	
	}
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