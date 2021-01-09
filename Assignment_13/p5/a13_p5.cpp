/*
CH-230-A
a13_p5.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A{
    int x;
    public:
        A(int i) { x = i; }
        void print() { cout << x; }
};
 
class B: virtual public A{
    public:
        B():A(10) {  }
};
 
class C:  virtual public A {
    public:
        C():A(10) {  }
};
 
class D: public B, public C {
    public:
        D():A(10){} //constructor class class A
};
 
int main()
{
    D d;
    d.print();

    return 0;
}

/*
The definition was missing for the class A in class D, because
in class B and C, the class A was virtually inherited and it is
necessary to re-define virtually inherited class in the derived class.
*/