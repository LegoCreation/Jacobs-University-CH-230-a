/*
    CH-230-A
    a11_p2.cpp
    Shishir Sunar
    ssunar@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();//empty constructor
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard(); //empty constructor
        Wizard(int);
        ~Wizard(){
            cout << "Destructing Wizard.\n";
        }
		void hover() const; //sevice method

	private:
		int distFactor;
};

Wizard::Wizard(int a){
    cout << "Constructor called\n";
    distFactor = a;
}

Wizard::Wizard() : distFactor(3)
{
    cout << "Empty constructor called.\n";
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//fish class
class Fish : public Creature {
	public:
		Fish(); //empty constructor
        ~Fish(); //destructor
		void swim() const;
        Fish(double value);
	private:
        double height;
};

Fish::Fish() : height(0)
{
    cout << "Empty constructor called.\n";
}

Fish::Fish(double value){ //setter
    height = value;
    cout << "Constructor called.\n";
}

Fish::~Fish() {
    cout << "Destructing fish." <<endl;
}

void Fish::swim() const
{ //service method
    cout << "Swimming " << (height * distance) << " meters deep.\n";
}

//dragon class
class Dragon: public Creature {
	public:
		Dragon();
        ~Dragon();
		void fly() const; //service method
        Dragon(unsigned long);
        void setpwrlvl(unsigned long); //setter
	private:
        unsigned long powerlevel;
};

void Dragon::setpwrlvl(unsigned long value){ //setter
    powerlevel = value;
    cout << "Setting power level to " << value << "." << endl;
}

Dragon::Dragon() : powerlevel(1)
{
    cout << "Empty constructor called.\n";
}

Dragon::Dragon(unsigned long value){
    powerlevel = value;
    cout << "Constructor called.\n";
}

Dragon::~Dragon() {
    cout << "Destructing dragon." <<endl;
}

void Dragon::fly() const
{//service method
    if (powerlevel < 5){ //fly if pwrlvl greater than 5
        cout << "Too weak to fly." <<endl;
        cout << "Increase your power level to at least 5." << endl;
    }
    else
    {
        cout << "Flying " << (1000 * powerlevel * distance) <<
         " meters high!" <<endl;
    }
    
}


int main()
{
    cout << "Creating an Creature.\n";
    Creature c; //creating creature
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w(5); //wizard creation
    w.run();
    w.hover();

    cout << "\nCreating a Fish.\n";
    Fish f(3); //fish creation
    f.swim();

    cout << "\nCreating a Dragon.\n";
    Dragon d; //dragon creation
    d.fly();
    cout << endl;
    d.setpwrlvl(7); //setting power level of dragon to 7
    d.fly();
    return 0;
} 
