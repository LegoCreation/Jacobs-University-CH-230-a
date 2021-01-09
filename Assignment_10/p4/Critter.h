#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;


public: // business logic methods are public

	Critter(); //empty constructor
	Critter(std::string& strr); //second constructor
	//third constructor
	Critter(std::string&, int hung, int b, double = 10);
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	// getter method
	double getHeight();
	int getHunger();
	int getBoredom();
	// service method
	void print();
};
