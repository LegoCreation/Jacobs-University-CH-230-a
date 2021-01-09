/*
CH-230-A
a5_p7.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char first[100], second[100];
    char *c_str;
    fgets (first, 100, stdin); //taking input
    //removing the enter key
    if (first[strlen(first) - 1] == '\n'){
		// this is \0 not just 0
        first[strlen(first) - 1] = '\0'; 
    }
    fgets (second, 100, stdin); //taking input
    //removing the enter key
    if (second[strlen(second) - 1] == '\n'){
		// this is \0 not just 0
        second[strlen(second) - 1] = '\0';
    }
	// allocate memory for strlen(first)+strlen(second)+1 
	// +1 is for the \0 in the result
    c_str = (char*) malloc (sizeof(char) 
        * (strlen (first) + strlen (second)));
    //allocating memory

    if (c_str == NULL){
        printf ("Memory not allocated\n");
        return 0;
        //exit if invalid allocation
    }
    // correct concatenation
    // if you read the decription of the function it add 
    // to the first argument and returns that as well
    c_str = strcat (c_str, first); // concatenation
    c_str = strcat (c_str, second); // concatenation
    printf ("Result of concatenation: %s\n", c_str);

    free (c_str);
    //deallocating the memory

    return 0;
}
