#include "TournamentMember.h"
#include <iostream>
#include <string>

using namespace std;

string TournamentMember::location = "Madrid"; //static location value

TournamentMember::TournamentMember(){ //empty constructor
    cout << "Empty constructor called (TournamentMember)" << endl;
    for (int i = 0; i<36; i++){
        fn[i] = 0;
        ln[i] = 0;
        dob[i] = 0;
    }
    height = age = 0;
}

TournamentMember::TournamentMember(char* nfn, char* nln,
 char* ndob, double nh, int na){ //parametric
    cout << "Parametric constructor called (TournamentMember)" << endl;
    setfn(nfn);
    setln(nln);
    setdob(ndob);
    this->height = nh;
    this->age = na;
 }

TournamentMember::TournamentMember(const TournamentMember &a){ //copy
    cout << "Copy constructor called (TournamentMember)" << endl;
    this->setfn(a.fn);
    this->setln(a.ln);
    this->setdob(a.dob);
    this->height = a.height;
    this->age = a.age;
}

TournamentMember::~TournamentMember(){ //destructor
    cout << "Destructor TournamentMember" << endl;
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

void Player::print_player(){
    cout << "Player info:" << endl;
    cout << "First name: " << getfn() << endl;
    cout << "Last name: " << getln() << endl;
    cout << "Date of Birth: " << getdob() <<endl;
    cout << "Height: " << getheight() << " cm." <<endl;
    cout << "Age: " << getage() << endl;
    cout << (left ? "Leftfooted" : "Rightfooted") << endl;
    cout << "Player Number: " << playernumber <<endl;
    cout << "Number of goal scored: " << goal << endl;
    cout << "Player position: " << position << endl;
    cout << "Location: " << getlocation() <<endl;
}

Player::Player(){
    cout << "Empty constructor called (Player)" << endl;
}

Player::Player(char* nfn, char* nln,
 char* ndob, double nh, int na, int pn, string pos, int g, bool l)
 :TournamentMember(nfn, nln, ndob, nh, na){
    cout << "Parametric constructor called (Player)" << endl;
    playernumber = pn;
    position = pos;
    goal = g;
    left = l;
}

Player::Player(const Player& a){
    cout << "Copy constructor called (Player)" << endl;
    this->playernumber = a.playernumber;
    this->position = a.position;
    this->goal = a.goal;
    this->left = a.left;
}

Player::~Player(){
    cout << "Destructor Player" << endl;
}