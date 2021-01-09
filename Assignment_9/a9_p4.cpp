/*
CH-230-A
a9_p4.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//first overload function
int mycount(int a, int b){
    return b-a;
    //returns the difference
}

//second overload function
int mycount(char a, string b){
    return count(b.begin(), b.end(), a);
    //returns the number of occurence
}

int main(){
    int a, b;
    char c;
    string d;
    // for the int values
    a = 7;
    b = 3;

    // for the char and string values
    c = 'i';
    d = "this is a string";

    cout << "If the values are int Result:" << mycount(a, b) << endl;
    cout << "If the values are char and String Result:"
     << mycount(c, d) << endl;
    return 0;
}