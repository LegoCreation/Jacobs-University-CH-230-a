/*
CH-230-A
a8_p7.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *read1, *read2, *write;
    char *line1 = (char*) malloc(1000); //allocates the memory
    char *line2 = (char*) malloc(1000); //allocates the memory
    read1 = fopen("text1.txt", "r"); //opens file in read mode
    read2 = fopen("text2.txt", "r"); //opens file in read mode
    if (read1 ==NULL || read2 == NULL ) {
        printf("Cannot open file!\n");
        //if error in opening the file
        exit(1);
    }
    write = fopen("merge12.txt", "w");
    if (write == NULL){
        printf("Error creating the file!\n");
        //if error in creating the file
        exit(1);
    }
    while (!feof(read1)){ //do until the end of the file
        fgets(line1, 1000, read1); //reads the line
        fprintf(write,"%s", line1); //writes the line
    }
    while (!feof(read2)){ //do until the end of the file
        fgets(line2, 1000, read2); //reads the line
        fprintf(write,"%s", line2); //writes the line
    }
    //closing the file
    fclose(read1);
    fclose(read2);
    fclose(write);
}