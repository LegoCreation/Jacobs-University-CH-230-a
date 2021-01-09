#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(){
    char firstname1[8] = "Sergio";
    char lastname1[7] = "Ramos";
    char dob1[11] = "1986-03-30";
    char firstname2[8] = "Marcelo";
    char lastname2[7] = "Vleira";
    char dob2[11] = "1988-05-12";
    char firstname3[8] = "Luka";
    char lastname3[7] = "Modric";
    char dob3[11] = "1985-09-09";

    Player a; //empty constructor
    Player b(firstname1, lastname1, dob1, 184, 34, 4, "Center-Back", 126, false);
    Player c(firstname2, lastname2, dob2, 174, 32, 12, "Left-Back", 23, true);
    Player d(firstname3, lastname3, dob3, 172, 35, 10, "Centeral-Midfielder", 150, false);
    Player e(a); //Copy constructor
    cout << endl;
    b.print_player();
    cout << endl;
    c.print_player();
    cout << endl;
    d.print_player();
    a.setlocation("Hamburg"); //changing location of a
    return 0;
}