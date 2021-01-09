#include <iostream>
#include "Vector.h"
using namespace std;
int main(){
    double v1[5] = {1.6, 7.8, 3.6, 0.5, -0.4};
    double v2[5] = {5, -0.7, 1.5, 6, -9};
    vector first;
    vector second(v1, 5);
    vector third(second);
    vector fourth(v2, 5);
    cout << "The norm of second vector is " << second.norm()
     << endl << endl;
    cout << "The dot product of second and fourth is " <<
     second.sp(fourth) << endl << endl;
    cout << "Adding second and fourth:\n";
    (second.add(fourth)).print();
    cout << "Subtracting second and fourth:\n";
    (second.diff(fourth)).print();
    return 0;
}