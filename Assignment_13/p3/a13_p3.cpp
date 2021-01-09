/*
CH-230-A
a13_p3.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <iostream>
#include <fstream>

using namespace std;
int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n; //take n
    auto a = new(nothrow) char[n][250];
    if (!a){ //error in memory allocation
        cerr << "Error allocating memory" << endl;
        exit(1);
    }
    for (int i = 0; i < n; i++){ //loop for filename
        cout << "Enter the filename: ";
        cin >> a[i];
    }
    ofstream out("concatn.txt", ios::binary); //dst file
    if (!out.good()){ //check if the file is good
            std::cerr << "Error copying file" << std::endl;
            exit(1);
        }
    for (int i = 0; i < n; i++){ //loop for concatenation
        ifstream b(a[i], ios::binary);
        if (!b.good()){ //check if the file is good
            std::cerr << "Error copying file" << std::endl;
            exit(1);
        }
        if (i!=n-1){ //if the file is not the last
            out << b.rdbuf();
            out << '\n';
        } else{ //if the file is the last
            out << b.rdbuf();
        }
        b.close();
    }
    out.close();
    cout << "Successfully concatenated" << endl ;
    delete[] a; //free the memory
}