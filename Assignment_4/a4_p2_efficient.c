/*
CH-230-A
zigzag.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
int main(){
    //Declarations
    char c[50];
    int counter = 0;
    fgets(c,50, stdin); //Taking the input
    //Loops and Printing
    while (c[counter]!='\n'){ //loop until Enter value
        printf("%c%c\n", ((counter % 2)*((int) ' ')), c[counter]);
        //The above line uses computationally efficient method to skip
        //the 'if' comparision. Adding NULL infront of the character if
        //even and a space if odd. :)
        counter++; //adding the counter
    }
    return 0;
}