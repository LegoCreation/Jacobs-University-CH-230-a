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
        first[strlen(first) - 1] = 0; 
    }
    fgets (second, 100, stdin); //taking input
    //removing the enter key
    if (second[strlen(second) - 1] == '\n'){
        second[strlen(second) - 1] = 0;
    }
 
    c_str = (char*) malloc (sizeof(char) 
        * (strlen (first) + strlen (second)));
    //allocating memory
 
    if (c_str == NULL){
        printf ("Memory not allocated\n");
        return 0;
        //exit if invalid allocation
    }
    strcat(c_str, first); // concatenation
    strcat(c_str, second);
    fputs(c_str, stdout);
    printf("\n");
    //printf ("Result of concatenation: %s\n", c_str);
    free (c_str);
    //deallocating the memory
 
    return 0;
}
