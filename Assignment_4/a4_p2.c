/*
CH-230-A
a4_p2.c
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
        if (counter % 2 == 0){ 
            //if the position is even printing without a space.
            printf("%c\n", c[counter]);
        }
        else {
            //if position is odd printing with a space.
            printf("%2c\n", c[counter]);
        }
        counter++; //adding the counter
    }
    return 0;
}