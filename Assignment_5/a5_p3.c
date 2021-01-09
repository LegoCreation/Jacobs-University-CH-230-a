/*
CH-230-A
a5_p3.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h>
#include "ctype.h"
#include "stdlib.h"
#include "string.h"

//function for counting the number of occurrences
int countlower(char* str){
    int i = 0; //index varaible for while
    int counter = 0; //counter for number of occurrences
    while (*(str+i)!='\n'){ //checking the string ends
        if (*(str+i)>='a' && *(str+i)<='z'){ 
            counter++; //adding 1 if True
        }
        i++; //adding the index by 1 per loop
    }
    return counter;
}
int main(){
    //Declarations
    char string[50];
    //loop
    while(1){
        printf("Enter a string\n");
        fgets(string, 50, stdin); //taking the string input
        if (string[0]=='\n'){ //if pressed enter
            break; //end the loop
        }
        printf("The number of lowercase characters: %d\n",
            countlower(string));
    }
    return 0;
}