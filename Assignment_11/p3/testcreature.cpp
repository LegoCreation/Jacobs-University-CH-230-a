/*
    CH-230-A
    a11_p3.cpp
    testcreature.cpp
    Shishir Sunar
    ssunar@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{
    cout << "Creating an Creature.\n";
    Creature c; //creating creature
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w(5); //wizard creation
    w.run();
    w.hover();

    cout << "\nCreating a Fish.\n";
    Fish f(3); //fish creation
    f.swim();

    cout << "\nCreating a Dragon.\n";
    Dragon d; //dragon creation
    d.fly();
    cout << endl;
    d.setpwrlvl(7); //setting power level of dragon to 7
    d.fly();
    return 0;
} 