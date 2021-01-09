/*
CH-230-A
a13_p4.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B: public A
{
public:
  B()  { setX(10); }
};
 
class C: public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    //if want to print the value from class B
    d.B::print(); //inherited the method from class B
    cout << endl;
    //if want to print the value from class C
    d.B::print(); //inherited the method from class C
    cout << endl;
    return 0;
}

/*
    class A
       ^
       |
    ________
   |        |
class B  class C
   |        |
    --------
       |
    class D

The orginal code did not specify a path for the base(class A) method to
be called. As the class D was inherited from class B and C but both B and
C are the derived class of A, so there is a path ambiguity. In simple terms
we just redefine our code in such a way that the method print() has a
chain of uniquely derived classes.
*/

