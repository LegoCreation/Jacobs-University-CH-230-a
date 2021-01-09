#include <iostream>
#include "City.h"

using namespace std;

//setters
void City::setname(string& newcityname) {
	cityname = newcityname;
}

void City::setmayor(string& newmayor) {
	mayor = newmayor;
}

void City::setnumber(int n){
	number = n;
}

void City:: setarea(double newarea){
    area = newarea;
}

//getters
double City::getarea() {
	return area;
}

int City::getnumber(){
	return number;
}

string& City::getcityname() {
	return cityname;
}

string& City::getmayor(){
	return mayor;
}

//printing service
void City::print() {
	cout << "Name of the city: " << getcityname() << endl;
	cout << "Number of inhabitants: " << getnumber() << endl;
	cout << "City mayor: " << getmayor() << endl;
	cout << "City area: " << getarea() << " sq km." << endl<<endl;
}