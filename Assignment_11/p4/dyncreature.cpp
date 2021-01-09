/*
    CH-230-A
    a11_p4.cpp
    testcreature.cpp
    Shishir Sunar
    ssunar@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Creating an Creature.\n";
    Creature c; //creating creature
    cout << "Which creature you want to create? \n";
    getline(cin, input);
    while(1){
        if (input.compare("wizard") == 0){
            cout << "\nCreating a Wizard.\n";
            Wizard *w;
            w = new Wizard; //wizard creation
            (*w).run();
            (*w).hover();
            delete w;
        }
        else if (input.compare("fish") == 0){
            cout << "\nCreating a Fish.\n";
            Fish *f;
            f = new Fish; //fish creation
            (*f).swim();
            delete f;
        }
        else if (input.compare("dragon") == 0){
            cout << "\nCreating a Dragon.\n";
            Dragon *d;
            d = new Dragon; //dragon creation
            (*d).fly();
            cout << endl;
            (*d).setpwrlvl(7); //setting power level of dragon to 7
            (*d).fly();
            delete d;
        }
        else if (input.compare("quit") == 0){
            break;
        }
        cout << "\nWhich creature you want to create? \n";
        getline(cin, input);

    }
    return 0;
} 