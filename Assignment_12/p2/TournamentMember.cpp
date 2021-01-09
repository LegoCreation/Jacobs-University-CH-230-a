#include "TournamentMember.h"
#include <iostream>
#include <string>

using namespace std;

string TournamentMember::location = "Madrid"; //static location value

TournamentMember::TournamentMember(){ //empty constructor
    cout << "Empty constructor called" << endl;
    for (int i = 0; i<36; i++){
        fn[i] = 0;
        ln[i] = 0;
        dob[i] = 0;
    }
    height = age = 0;
}

TournamentMember::TournamentMember(char* nfn, char* nln,
 char* ndob, double nh, int na){ //parametric
    cout << "Parametric constructor called" << endl;
    setfn(nfn);
    setln(nln);
    setdob(ndob);
    this->height = nh;
    this->age = na;
 }

TournamentMember::TournamentMember(const TournamentMember &a){ //copy
    cout << "Copy constructor called" << endl;
    this->setfn(a.fn);
    this->setln(a.ln);
    this->setdob(a.dob);
    this->height = a.height;
    this->age = a.age;
}

TournamentMember::~TournamentMember(){ //destructor
    cout << "Destructor called" << endl;
}


void TournamentMember::print() const{ //print method
    cout << "Member info:" <<endl;
    cout << "First name: " << fn << endl;
    cout << "Last name: " << ln << endl;
    cout << "Date of Birth: " << dob <<endl;
    cout << "Height: " << height << " cm." <<endl;
    cout << "Age: " << age << endl;
    cout << "Location: " << location <<endl;
}