/*
    CH-230-A
    a11_p4.cpp
    Creature.h
    Shishir Sunar
    ssunar@jacobs-university.de
*/
class Creature {
	public:
		Creature(); //empty constructor
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard(); //empty constructor
        Wizard(int); //parametric
        ~Wizard(); //destructor
		void hover() const; //service method

	private:
		int distFactor;
};

class Fish : public Creature {
	public:
		Fish(); //empty constructor
        ~Fish(); //destructor
		void swim() const;
        Fish(double value); //parametric
	private:
        double height;
};

class Dragon: public Creature {
	public:
		Dragon();
        ~Dragon();
		void fly() const; //service method
        Dragon(unsigned long); //parametric
        void setpwrlvl(unsigned long); //setter
	private:
        unsigned long powerlevel;
};