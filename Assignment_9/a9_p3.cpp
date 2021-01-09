/*
CH-230-A
a9_p3.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <iostream>

using namespace std;

float absolute(float x) {
    return ((-1)*(x<0)+(x>=0))*x;
    //returns the required value
}

int main(){
    float x;
    cin >> x;
    cout << absolute(x) << endl;
    return 0;
}