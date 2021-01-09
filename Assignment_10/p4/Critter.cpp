#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom){
	boredom = newboredom;
}

void Critter::setHeight(double newheight){
	height = newheight;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << getHunger()
	 << "." << endl;
	cout << "My height is " << getHeight() << " ft." <<
	 "My boredom level is " << getBoredom() << "." << endl<< endl;
}

int Critter::getHunger() {
	return hunger;
}

double Critter::getHeight() {
	return height;
}

int Critter::getBoredom() {
	return boredom;
}

//default constructor
Critter::Critter(){
	name = "default_critter";
	height = 5;
	hunger = 0;
	boredom = 0;
	cout << "Default object created!" << endl;
}

//second constructor overload
Critter::Critter(std::string& strr){
	name = strr;
	height = 5;
	hunger = 0;
	boredom = 0;
}

//third constructor overload
Critter::Critter(std::string& strr, int hung, int b, double h):
name(strr), hunger(hung), boredom(b), height(h) {}