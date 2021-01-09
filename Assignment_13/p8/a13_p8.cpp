/*
CH-230-A
a13_p8.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <iostream>
#include <exception>

class Motor{
    public:
    Motor(){throw "This motor has problems";}
};

class Car: public Motor{
    public:
    Car(): Motor(){};
};

class Garge{
    public:
    Garge(){
        try{
            Car a; //calling empty constructor
        }
        catch(const char* e){
            std::cerr << "Different Exception" << std::endl; 
            //different string
        }
        throw "The car in this garage has problems with the motor";
    }
};

int main(){
    try{Garge a;}
    catch(const char* e){std::cerr << e << "\n";}
    return 0;
}