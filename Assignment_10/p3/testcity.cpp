#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv)
{
	City c1, c2, c3;
    string cityname, mayor;
    int number; //number of inhabitants in the city
    double area; //area of the city
    //Bremen info,
    cityname = "Bremen";
    mayor = "Andreas Bovenschulte";
    number = 550000;
    area = 326.7;
    c1.setname(cityname);
    c1.setnumber(number);
    c1.setmayor(mayor);
    c1.setarea(area);
    c1.print();
    //Paris info,
    cityname = "Paris";
    mayor = "Anne Hidalgo";
    number = 2161000;
    area = 105.4;
    c2.setname(cityname);
    c2.setnumber(number);
    c2.setmayor(mayor);
    c2.setarea(area);
    c2.print();
    //London info,
    cityname = "London";
    mayor = "Sadiq Khan";
    number = 8982000;
    area = 1572;
    c3.setname(cityname);
    c3.setnumber(number);
    c3.setmayor(mayor);
    c3.setarea(area);
    c3.print();
    
    return 0;
}
