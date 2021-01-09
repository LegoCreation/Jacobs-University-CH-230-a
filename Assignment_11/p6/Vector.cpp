#include <iostream>
#include "Vector.h"
#include <cmath>
using namespace std;

void vector::setsize(int a){
    size = a;
}

void vector::setvector(double* a){
    value = a;
}

int vector::getsize(){
    return size;
}

double* vector::getvector(){
    return value;
}

//default constructor
vector::vector(){
    value = new double[2];
    size = 2;
    value[0] = value[1] = 0;
}

//parametric constructor
vector::vector(double* arr, int a){
    size = a;
    value = new double[size];
    for (int i = 0;i < size; i++){
        value[i] = arr[i];
    }
}

//copy constructor
vector::vector(const vector& a){
    size = a.size;
    value = new double[size];
    for (int i = 0; i<size; i++){
        value[i] = a.value[i];
    }
}

//destructor
vector::~vector(){
    delete[] value;
}

//printing method
void vector::print() const{
    if (size == 0){
        cout << "Empty vector\n\n";
        return;
    }
    cout << "Printing vector...\n(";
    for (int i = 0; i<size-1;i++){
        cout << value[i] <<", ";
    }
    cout << value[size-1] <<")\n\n";
}

//norm of a vector
double vector::norm(){
    double a = 0;
    for (int i = 0; i<size; i++){
        a += value[i]*value[i];
    }
    return pow(a, 0.5);
}

//scalar product
double vector::sp(const vector a){
    if (size!=a.size){
        cout << "$Dimension Mismatch$ ";
        cout << "Exiting...\n";
        exit(0);
    }
    double sum;
    for (int i = 0; i<size; i++){
        sum += value[i]*a.value[i];
    }
    return sum;
}

//vector addition
vector vector::add(const vector a) const{
    if (size != a.size){
        cout << "$Dimension Mismatch$ ";
        cout << "Exiting...\n";
        exit(0);
    }
    double *v = new double[size];
    for (int i = 0; i<size; i++){
        v[i] = value[i]+a.value[i];
    }
    vector nv(v, size);
    return nv;
}

//vector addition
vector vector::diff(const vector a) const{
    if (size != a.size){
        cout << "$Dimension Mismatch$ ";
        cout << "Exiting...\n";
        exit(0);
    }
    double *v = new double[size];
    for (int i = 0; i<size; i++){
        v[i] = value[i]-a.value[i];
    }
    vector nv(v, size);
    return nv;
}