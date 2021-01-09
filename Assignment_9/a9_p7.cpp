/*
CH-230-A
a9_p7.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <iostream>

using namespace std;

void swapping(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
} //swap ints
void swapping(float &a, float &b) {
    float temp;
    temp = a;
    a = b;
    b = temp;
    return;
} //swap floats
void swapping(const char* &a, const char* &b) {
    const char* temp;
    temp = a;
    a = b;
    b = temp;
    return;
} //swap char pointers

int main(){
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}