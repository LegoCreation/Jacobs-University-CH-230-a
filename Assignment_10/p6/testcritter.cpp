#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	string name = "Computer";
	int hunger = 2, boredom = 6;
	double height = 4.5, thirst = 7.8;
	Critter c1; //emtpy constructor
	Critter c2(name); //second constructor
	Critter c3(name, hunger, boredom, height); //third constructor
	Critter c4(name, hunger, boredom); //fourth instance
	Critter c5(name, hunger, boredom, height, thirst); //five parms
	//printings
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	c5.print();
        return 0;
}
