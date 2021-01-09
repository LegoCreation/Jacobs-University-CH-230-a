/*
CH-230-A
a2_p9.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include "stdio.h"
int main(){
    //Declarations
    char c;
    int a_c, digit_bool, letter_bool;
    scanf("%c", &c); //input
    a_c = (int) c; //returns the ascii value of c
    //Computations
    digit_bool = ( a_c >= 48 ) && ( a_c <= 57); //boolean for a digit
    letter_bool = ((a_c >= 65)&& (a_c<= 90)) || ((a_c >= 97)&& (a_c<= 122));
    //The above line is a boolean for a letter (UPPERCASE and lowercase)
    
    //Logics and printing the values
    if (digit_bool) { //if the enter value is a digit
        printf("%c is a digit\n", c);   
    }
    else if (letter_bool) { // if the entered value is a letter
        printf("%c is a letter\n", c);
    }
    else { // if the entered value is some other symbol
        printf("%c is some other symbol\n", c);
    }
    return 0;
}