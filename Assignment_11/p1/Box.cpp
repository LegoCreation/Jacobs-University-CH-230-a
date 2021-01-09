#include <iostream>
#include "Box.h"

using namespace std;

//setters
void box::setheight(double h){
    height = h;
}

void box::setwidth(double w){
    width = w;
}

void box::setlength(double l){
    length = l;
}
//getters

double box::getheight(){
    return height;
}

double box::getwidth(){
    return width;
}

double box::getlength(){
    return length;
}

//printing service

void box::printvolume(){
    cout << (getheight()* 
    getlength()*getwidth())<< " cubic unit. " << endl;
}

//default constructor

box::box(){
    length = height = width = 0;
}

//parametric consructor
box::box(double l, double w, double h) {
    setlength(l);
    setheight(h);
    setwidth(w);
}

//copy constructor
box::box(const box& a){
    height = a.height;
    length = a.length;
    width = a.width;
    cout << "Copy constructer called" <<endl;
}

//destructor
box::~box(){
    
}