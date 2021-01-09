#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(){
    char firstname[8] = "Sergio";
    char lastname[7] = "Ramos";
    char dob[11] = "1986-03-30";
    double height = 184;
    int age = 34;
    TournamentMember a; //empty constructor
    TournamentMember b(firstname, lastname, dob, height, age); //parametric
    TournamentMember c(b); //copy
    b.print();
    a.setlocation("Spain"); //changing location of a
    cout << endl;
    b.print(); //location changed to Spain
    cout << endl;
    c.print(); //location changed to Spain
    return 0;
}