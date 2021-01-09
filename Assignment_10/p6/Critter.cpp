#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = (double)  newhunger / 10;
}

void Critter::setBoredom(int newboredom){
	boredom = newboredom;
}

void Critter::setHeight(double newheight){
	height = newheight;
}

void Critter::setThirst(double newthirst){
	thirst = newthirst;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << getHunger()
	 << "." << endl;
	cout << "My height is " << getHeight() << " ft." <<
	 "My boredom level is " << getBoredom() << "." << endl <<
	 "My thirst level is " << getThirst() << "." << endl<< endl;
}

int Critter::getHunger() {
	return (int) (hunger*10);
}

double Critter::getHeight() {
	return height;
}

int Critter::getBoredom() {
	return boredom;
}

double Critter::getThirst() {
	return thirst;
}

//default constructor
Critter::Critter(){
	name = "default_critter";
	height = 5;
	hunger = 0;
	boredom = 0;
	thirst = 0;
	cout << "Default object created!" << endl;
}

//second constructor overload
Critter::Critter(std::string& strr){
	name = strr;
	height = 5;
	hunger = 0;
	boredom = 0;
	thirst = 0;
}

//third constructor overload
Critter::Critter(std::string& strr, int hung, int b, double h , double t):
name(strr), boredom(b), height(h), thirst(t) {
	hunger = (double)  hung / 10;
}