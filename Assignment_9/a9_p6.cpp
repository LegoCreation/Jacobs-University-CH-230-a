/*
CH-230-A
a9_p6.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <iostream>
#include <math.h>

using namespace std;

//first overload for the integer input
int myfirst(int arr[], int n){
    for(int i = 0; i<n; i++){
        if ((arr[i]>=0) && (arr[i] % 2 == 0)){
            return arr[i]; 
            //if positive even then return value
        }
    }
    return -1; //if no matching conditions
}

//second overload for the double input
double myfirst(double arr[], int n){
    for(int i = 0; i<n; i++){
        if ((arr[i] == floor(arr[i])) && (arr[i] < 0)) {
            return arr[i];
            //if integers (math) and negative
        }
    }
    return -1.1; //if no matching conditions
}

//third overload for the chars input
char myfirst(char arr[], int n){
    for(int i = 0; i<n; i++){
        if ((arr[i]>='b' && arr[i]<='z') || (arr[i]>='B' && arr[i]<='Z')){
            //if alphabets
            if ((arr[i] != 'e') && (arr[i] != 'i') &&
             (arr[i] != 'o') && (arr[i] != 'u')){
                return arr[i];
                //if not vowel return value
            }
        }
    }
    return '0'; //if no matching condtions
}

int main (){
    int n = 5; //array dimension
    int arr[n] = {-2, -1, 3, -6, 8}; //values stored as integers
    double d_arr[n] = {1.999, -1.4999, 5.006, -2.00, 6.001}; //as doubles
    char c[n] = {'a', '&', 'b', '0', 'e'}; //as chars
    cout << "If the input is array of integers, the result is: "
     << myfirst(arr, n) << endl; //calling function as integer inputs
    cout << "If the input is array of doubles, the result is: "
     << myfirst(d_arr, n) << endl; //as double inputs
    cout << "If the input is array of chars, the result is: "
     << myfirst(c, n) << endl; //as char inputs
    return 0;
}