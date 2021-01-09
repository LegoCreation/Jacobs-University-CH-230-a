/*
CH-230-A
a8_p6.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    double var1, var2, sum , diff, prod, div;
    char *filename1, *filename2; //name of files
    FILE *read1, *read2;
    filename1 = (char*) malloc(2040); //memory allocation
    filename2 = (char*) malloc(2040); //memory allocation
    if (filename1==NULL || filename2 == NULL) {
        printf("Memory not allocated!\n");
        //error in memory allocation
        exit(1);
    }
    fgets(filename1, 2040, stdin);
    fgets(filename2, 2040, stdin);
    filename1[strlen(filename1)-1] = 0; //remove the enter stored
    filename2[strlen(filename2)-1] = 0; //remove the enter stored
    read1 = fopen(filename1, "r"); //opens the file in read mode
    read2 = fopen(filename2, "r"); //opens the file in read mode
    if (read1 == NULL || read2 == NULL){
        printf("Cannot open the file\n");
        //if error in opening the file
        exit(1);
    }
    fscanf(read1, "%lf", &var1); //reads the double value
    fscanf(read2, "%lf", &var2); //reads the double value
    sum = var1 + var2; //calculates the sum
    diff = var1 - var2; //difference
    prod = var1 * var2; //product
    if (var2 == 0) {
        printf("Divide by zero!");
        //if the var2 is 0 then divide by zero makes no sense
        exit(1);
    }
    div = var1 / var2; //division
    FILE *write;
    write = fopen("result.txt", "w"); //create a new file in writing mode
    if(write == NULL){
        //unable to create a file
        printf("Unable to create file!\n");
        exit(1);
    }
    fprintf(write,"%lf\n%lf\n%lf\n%lf", sum, diff, prod, div);
    //stores the values line by line
    //closing the files
    fclose(read1);
    fclose(read2);
    fclose(write);
    return 0;
}