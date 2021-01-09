/*
CH-230-A
a8_p5.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE* read ; //pointer for the file
    char c[2]; //variable for two characters
    read = fopen("chars.txt", "r");
    //reads the file
    if (read == NULL){
        //unable to read a file
        printf("Error opening the file!\n");
        exit(1);
    }
    for (int i = 0; i<2; i++){ 
        //loop for getting two characters from the file
        c[i] = getc(read);
    }
    FILE* write; //pointer for the file
    write = fopen("codesum.txt", "w");
    //get the file to write
    if(write == NULL){
        //unable to create a file
        printf("Unable to create file!\n");
        exit(1);
    }
    //write in the file
    fprintf(write, "%d", (c[0]+c[1]));
    //closing the files
    fclose(write);
    fclose(read);
    return 0;
}