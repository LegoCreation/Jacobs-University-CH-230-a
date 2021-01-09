/*
    CH-230-A
    a11_p3.cpp
    Creature.cpp
    Shishir Sunar
    ssunar@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

//Creature class

Creature::Creature(): distance(10)
{}

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}

//Wizard class

Wizard::Wizard(int a){
    cout << "Constructor called\n";
    distFactor = a;
}

Wizard::Wizard() : distFactor(3)
{
    cout << "Empty constructor called.\n";
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard(){
    cout << "Destructing wizard.\n";
}

//Fish class

Fish::Fish() : height(0)
{
    cout << "Empty constructor called.\n";
}

Fish::Fish(double value){ //setter
    height = value;
    cout << "Constructor called.\n";
}

Fish::~Fish() {
    cout << "Destructing fish." <<endl;
}

void Fish::swim() const
{ //service method
    cout << "Swimming " << (height * distance) << " meters deep.\n";
}

//Dragon class

void Dragon::setpwrlvl(unsigned long value){ //setter
    powerlevel = value;
    cout << "Setting power level to " << value << "." << endl;
}

Dragon::Dragon() : powerlevel(1)
{
    cout << "Empty constructor called.\n";
}

Dragon::Dragon(unsigned long value){
    powerlevel = value;
    cout << "Constructor called.\n";
}

Dragon::~Dragon() {
    cout << "Destructing dragon." <<endl;
}

void Dragon::fly() const
{//service method
    if (powerlevel < 5){ //fly if pwrlvl greater than 5
        cout << "Too weak to fly." <<endl;
        cout << "Increase your power level to at least 5." << endl;
    }
    else
    {
        cout << "Flying " << (1000 * powerlevel * distance) <<
         " meters high!" <<endl;
    }
    
}