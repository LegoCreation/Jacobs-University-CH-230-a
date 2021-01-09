/*
CH-230-A
a9_p8.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <iostream>
#include <new>
using namespace std;

//function for subtracting the max value
void subtract_max(int* &arr, int n){
    int max = arr[0];
    for(int i = 0; i<n; i++){ //loop for finding the max
        max = (max<arr[i])*arr[i] + (arr[i] < max)*max;
    }
    for(int j = 0; j <n; j++ ){ //loop for subtracting the max
        arr[j] -= max;
    }
    return;
}

void deallocate(int* &arr){
    delete [] arr; //delete the array;
    return;
}

int main(){
    int n; //dimension
    cout << "Enter a positive integer value: ";
    cin >> n; //input
    if (n<0) { //if negative value is entered
        cout << "Invalid input! Exit status 1" << endl;
        return 1;
    }
    int *arr;
    arr = new (nothrow) int [n];
    if (arr == NULL){ //if error in memory allocation
        cout << "Error allocating memory" << endl;
        return 1;
    }
    for(int i = 0; i<n; i++){ //loop for data
        cout << "Enter an integer value for the array: ";
        cin >> arr[i];
    }
    subtract_max(arr, n); //calling the function
    cout << "The value of modified array: " << endl;
    for(int i = 0; i<n; i++){ //loop for showing the modified data
        cout << arr[i] << endl;
    }
    deallocate(arr); //calling the function to deallocate
    return 0;
    
}