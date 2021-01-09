#include <string>

class box{
private:
    double height, length, width; //private data
public:

    box(); //default constructor
    box(double, double, double); //parametric
    box(const box&); //copy constructor
    ~box(); //deconstructor
    //setters
    void setheight(double h);
    void setwidth(double w);
    void setlength(double l);
    
    //getters
    double getheight();
    double getwidth();
    double getlength();

    //service method
    void printvolume();
};