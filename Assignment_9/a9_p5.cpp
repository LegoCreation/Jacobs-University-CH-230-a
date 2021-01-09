/*
CH-230-A
a9_p5.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <iostream>
#include <random>

using namespace std;

int main(){
    string name; //player's name
    cout << "Your name : ";
    getline(cin, name);
    /*  
        i have to generate uniform random number otherwise
        someone might statistically prove that the game is biased in
        some sort of other distribution. And the MAP estimator will no
        longer become arbitary.
    */
    //unifrom random number generating algorithm
    const int start = 1;
    const int end = 100;
    random_device r;
    mt19937 gen(r());
    uniform_int_distribution<int> unif_RV(start, end);
    int number = unif_RV(gen);


    int guess; //number to be guessed
    cout << "Enter a number between 1 to 100: ";
    cin >> guess; //input
    int tries = 1; //counter for number of tries
    while (guess >100 || guess < 1){
        cout << "Number is not between 1 and 100. Please try again\n";
        cout << "Enter a number between 1 to 100: ";
        cin >> guess; //input
        tries++;
    }
    while(number!=guess){ //if number is not equal to guess
        if (guess < number){ //if the guess if less than the value
            cout << "Guess a higher number" << endl;
        }
        else { //if more than the value
            cout << "Guess a lower number" << endl;
        }
        cout << "Number of tries: " << tries << endl << endl;
        cout << "Enter a number between 1 to 100: ";
        cin >> guess;
        while (guess >100 || guess < 1){
            cout <<"Number is not between 1 and 100. Please try again\n";
            cout << "Enter a number between 1 to 100: ";
            cin >> guess; //input
            tries++;
        }
        tries++; //tries increament
    }
    //if the guess is right
    cout << "Congratulations " << name << "! You won the game." << endl;
    return 0;
}