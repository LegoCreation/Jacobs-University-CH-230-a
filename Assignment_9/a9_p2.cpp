/*
CH-230-A
a9_p2.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <iostream>

int main(){
    using namespace std;
    int n;
    double x;
    string s;
    cin >> n; //taking integer as input
    cin >> x; //taking double as input
    getchar();
    getline(cin, s); //string may contain spaces
    for (int i = 0; i<n; i++){ //loop until n
        cout << s << ":" << x << endl;
    }
    return 0;

}