/*
CH-230-A
a13_p7.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <iostream>
#include <exception>

using namespace std;

class OwnException : public exception {
    private:
        string a;
    public:
        OwnException(string b) {a = b;}
        const char* what() {return "OwnException";}
        //redefining what
        void setMessage(string b){b = a;}
        string getMessage() {return a;}
};

void Exception(int a){
    if (a==1) { //if 1
        throw 'a';
    }
    else if (a==2) { //if 2
        throw 12;
    }
    else if (a==3) { //if 3
        throw true;
    }
    else { //default case
        throw OwnException("Default case exception");
    }
    
}
int main(){
    try{ Exception(1); }
    catch(const char &a){
        cerr << "Caught in main: " << a << endl;
    }
    try{ Exception(2); }
    catch(const int &a){
        cerr << "Caught in main: " << a << endl;
    }
    try{ Exception(3); }
    catch(const bool &a){
        cerr << "Caught in main: " << a << endl;
    }
    try{ Exception(10); } //default case
    catch(OwnException& a){
        cerr << "Caught in main: " << a.what() << endl;
    }
}