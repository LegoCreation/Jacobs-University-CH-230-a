/*
CH-230-A
a9_p9.cpp
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <iostream>
#include <random>
#include <string>

using namespace std;

int main (){
    char play_again = 'y'; //playing indicator
    //word list
    string words[17] = {
        "computer",
        "television",
        "keyboard",
        "laptop",
        "mouse",
        "milk",
        "books",
        "house",
        "mobile",
        "watch",
        "bottle",
        "music",
        "game",
        "pen",
        "charger",
        "vowels",
        "jackets"
    };
    //random number generating algorithm
    const int start = 0; //starting index
    const int end = 16; //ending index
    random_device r;
    mt19937 gen(r());
    uniform_int_distribution<int> unif_RV(start, end);

    int index; //word index
    string input; //guess from player
    int tries = 1; //no. of tries
    while(play_again == 'Y' || play_again == 'y'){
        index = unif_RV(gen); //take a random index
        string random_word = words[index]; //store the random word
        for (unsigned int i = 0; i<random_word.length(); i++){ 
            //replace the vowels by '_'
            switch (random_word[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                random_word[i] = '_';
                //if it's vowel then replace by _
                break;
            default:
                break;
            }
        }
        cout << "Please guess the following word." << endl <<
         random_word << endl;
        getline(cin, input); //input from user
        while (input != words[index]){
            //loop until right word
            if (input == "quit") return 0;
            //if typed quit then exit
            cout << "Please guess again" << endl;
            getline(cin, input);
            tries++; //increament to no. of tries
        }
        cout << "You guessed it right!" << endl;
        cout << "Number of tries = " << tries << endl << endl;
        cout << "Enter (Y/y) to play again: ";
        cin >> play_again;
        getchar();
        cout << endl;
        tries = 1; //resetting the tries
    }
    return 0;

}
