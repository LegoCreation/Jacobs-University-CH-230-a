/*
CH-230-A
a9_p1.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <iostream>

int main(){
    using namespace std;
    string c_origin; //declaring string from the namespace std
    cout << "Enter your country of origin " << flush;
    getline(cin, c_origin); //the country origin may contain spaces
    cout << "Your country of origin is " << c_origin << endl;
    return 0;

}