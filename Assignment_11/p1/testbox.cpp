#include <iostream>
#include <cstdlib>
#include "Box.h"

using namespace std;

int main(){
	double height, width, length;
    int n;
    cout << "Enter a value for n: ";
    cin >> n; //input n
    cout << endl;
    box *arr;
    arr = new box[2*n]; //memory allocation
    for (int i = 0; i<n; i++){ //loop until n
        cout << "Box [" << i <<"] "<< endl;
        cout << "Enter length: ";
        cin >> length;
        arr[i].setlength(length);
        cout << "Enter width: ";
        cin >> width;
        arr[i].setwidth(width);
        cout << "Enter height: ";
        cin >> height;
        arr[i].setheight(height);
        arr[i+n] = box (arr[i]);
        cout << endl;
    }

    for (int i = 0; i < 2 * n; i++){ //loop until 2n
        cout << "Box [" << i <<"] ";
        arr[i].printvolume(); //prints the volume
    }
    delete[] arr;
    return 0;
}
