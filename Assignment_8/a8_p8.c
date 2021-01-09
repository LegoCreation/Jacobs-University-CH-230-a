/*
CH-230-A
a8_p8.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int indicator = 0, counter = 0;
    char *filename1, ch;//name of file, character in the file
    FILE *read1;
    filename1 = (char*) malloc(2040); //memory allocation
    if (filename1==NULL) {
        printf("Memory not allocated!\n");
        //error in memory allocation
        exit(1);
    }
    fgets(filename1, 2040, stdin); //takes the filename
    filename1[strlen(filename1)-1] = 0; //remove the enter stored
    read1 = fopen(filename1, "r"); //opens the file in read mode
    if (read1 == NULL){
        printf("Cannot open the file\n");
        //if error in opening the file
        exit(1);
    }
    ch = fgetc(read1); //reads the first character in the file
    while (ch!=EOF) { //loop until end of file
        switch (ch) {
            //different cases
            case ' ':
            case ',':
            case '?':
            case '!':
            case '.':
            case '\t':
            case '\r':
            case '\n':
                //even if the above characters appear consecutively
                //the counter must be increase by only one
                if (indicator<1) counter++;
                indicator++;
                break;
            default:
                indicator = 0; //set the indicator to 0
                break;
        }
        ch = fgetc(read1); //reads the character from the file
    }
    if (indicator==0) counter++;
    //if file doesnot end with the above punctuations
    printf("The file contains %d words.\n", counter);
    fclose(read1); //closing the file
    return 0;
}