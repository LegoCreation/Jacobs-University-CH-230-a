/*
CH-230-A
a4_p11.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h>
#include "ctype.h"
#include "stdlib.h"
#include "string.h"

//function for counting the number of occurrences
int countinsensitive(char* str, char c){
    int i = 0; //index varaible for while
    int counter = 0; //counter for number of occurrences
    while (tolower(*(str+i))!='\n'){ //checking the string ends
        if (tolower(*(str+i))==tolower(c)){ //comparing the characters
            counter++; //adding 1 if True
        }
        i++; //adding the index by 1 per loop
    }
    return counter;
}
int main(){
    //Declarations
    char* d_arr;
    char* d_arr2;
    d_arr = (char*) malloc(50); //allocating the memory
    if(d_arr == NULL){ //checking if there is enough space
        printf("Memory not allocated");
        return 0;
    }
    printf("Enter a string\n");
    fgets(d_arr, 50, stdin); //taking the string input
    //allocating the memory for the second string with
    //the size of first string
    d_arr2 = (char*) malloc(strlen(d_arr)); 
    strcpy(d_arr2, d_arr); //copying the d_arr to d_arr2
    free(d_arr); //deallocating the memory
    //Printings and calling the function
    printf("The character ’%c’ occurs %d times.\n", 
        'b', countinsensitive(d_arr2, 'b'));
    printf("The character ’%c’ occurs %d times.\n", 
        'H', countinsensitive(d_arr2, 'H'));
    printf("The character ’%c’ occurs %d times.\n", 
        '8', countinsensitive(d_arr2, '8'));
    printf("The character ’%c’ occurs %d times.\n", 
        'u', countinsensitive(d_arr2, 'u'));
    printf("The character ’%c’ occurs %d times.\n", 
        '$', countinsensitive(d_arr2, '$'));
    free(d_arr2); //deallocating the memory
    return 0;
}