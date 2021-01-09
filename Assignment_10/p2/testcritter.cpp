#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	double height;
	double money;
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	cout << "Height (in ft.): ";
	cin >> height;
	c.setHeight(height);
	cout << "Money in dollars: ";
	cin >> money;
	c.setMoney(money);
	cout << "You have created:" << endl;
	c.print();
    return 0;
}
