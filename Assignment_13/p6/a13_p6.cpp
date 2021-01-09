/*
CH-230-A
a13_p6.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
      vector<int> myvector(10);
    try {
      myvector.at(20)=100;      // vector::at throws an out-of-range
    }
    catch (const std::out_of_range& error) {
      cerr << "Error: " << error.what() << '\n';
    }
  
    return 0;
}