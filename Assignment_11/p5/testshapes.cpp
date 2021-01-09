#include <iostream>
#include "Shapes.h"

using namespace std;



int main(int argc, char** argv) {
  Circle c("Disc", 3, 4, 7); //new circle
  Rectangle r("Sheet", 2, 6, 4, 8); //rectangle
  Square s("Tiles", 0, 10, 5); //square
  c.printName();
  cout << "Perimeter " << c.perimeter() << " units" << endl;  
  cout << "Area " << c.area() << " sq units" << endl << endl;
  r.printName();
  cout << "Perimeter " << r.perimeter() << " units" << endl;  
  cout << "Area " << r.area() << " sq units" << endl << endl;
  s.printName();
  cout << "Perimeter " << s.perimeter() << " units" << endl;  
  cout << "Area " << s.area() << " sq units" << endl;
}
