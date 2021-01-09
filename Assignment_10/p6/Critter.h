#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;
	double thirst;


public: // business logic methods are public

	Critter(); //empty constructor
	Critter(std::string& strr); //second constructor
	//third constructor
	Critter(std::string&, int hung, int b, double = 10, double = 0);
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	void setThirst(double newthirst);
	// getter method
	double getHeight();
	int getHunger();
	int getBoredom();
	double getThirst();
	// service method
	void print();
};
