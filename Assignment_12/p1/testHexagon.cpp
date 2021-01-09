#include <iostream>
#include "Shapes.h"

using namespace std;



int main(int argc, char** argv) {
  Hexagon a("blue hexagon", 0, 0, 9); //blue hexagon with side 9
  Hexagon b("green hexagon", 0, 0, 10); //green hexagon with side 15
  Hexagon c(b); //copy constructor
  a.printName();
  cout << "Perimeter " << a.perimeter() << " units" << endl;  
  cout << "Area " << a.area() << " sq units" << endl << endl;
  b.printName();
  cout << "Perimeter " << b.perimeter() << " units" << endl;  
  cout << "Area " << b.area() << " sq units" << endl << endl;
  b.printName();
  cout << "Perimeter " << c.perimeter() << " units" << endl;  
  cout << "Area " << c.area() << " sq units" << endl;
}
