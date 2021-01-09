#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setHeight(double newheight){
	height = newheight;
}

void Critter:: setMoney(double newmoney){
	money = newmoney;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." <<
	" My height is "<< getHeight() << "ft. I have $" << getMoney() << endl;
}

double Critter::getHeight() {
	return height;
}

double Critter::getMoney(){
	return money;
}