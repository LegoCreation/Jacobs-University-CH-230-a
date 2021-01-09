/*
CH-230-A
a8_p9.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *reads, *write;
    int n;
    char c[64];
    scanf("%d", &n);
    getchar();
    //double pointer for storing various file name
    char **filename = (char**) malloc(sizeof(char*)*n);
    if (filename == NULL){
        printf("Invalid Memory allocation\n");
        //fail in memory allocation
        exit(1);
    }
    for (int i = 0; i<n; i++){
        //allocating memory for specific file name with the size of
        //255 bytes as in linux you can have maximum file name of 255 bytes
        filename[i] = (char*)malloc(sizeof(char)*255);
        if (filename[i]==NULL){
            printf("Invalid Memory Allocation\n");
            //fail in memory allocation
            exit(1);
        }
        fgets(filename[i], 255, stdin);
        filename[i][strlen(filename[i])-1]='\0';
        //removing the enter key
        if (filename[i]==NULL){
            printf("Invalid filename\n");
            exit(1);
        }
    }
    int count = 0, index = 0, m;
    write = fopen("output.txt", "wb");
    //opening file as write in binary
    if (write == NULL){
        printf("Unable to create a file\n");
        //error in opening the file
        exit(1);
    }
    printf("Concating the content of %d files ...\n", n);
    printf("The result is:\n");
    for (int i = 0; i<n; i++){ //main loop for reading and writing
        reads = fopen(filename[i], "rb");
        //opens the file in read in binary
        if (reads == NULL){
            printf("Unable to read the file(s)\n");
            //error in opening file
            exit(1);
        }
        //loop for counting number of characters
        while(!feof(reads)){
            fgetc(reads);
            count++;
        }
        fseek(reads, 0, SEEK_SET); //setting the cursor to the beginning
        m = count / 64; 
        //counting how many times we can write 64 byte char chunk
        while(!feof(reads)){
            fread(c, 64, 1, reads);
            fwrite(c, 1, (64*(m!=index)+((count % 64)-1)*(m==index)),
             write);
             //boolean algebra. Write accordingly, If the content
             //is not a multiple of 64.
            for (int j = 0; j <
             (64*(m!=index)+((count % 64)-1)*(m==index)); j++){
                 printf("%c", c[j]); //printing the content
            }
            index++; //suming the index for the times of chunks
        }
        if (i != n-1) { //if it is the last file then dont add '\n'
            printf("\n");
            fwrite("\n",1,1,write);
        }
        fclose(reads); //closing the file
        index = 0; //resetting the index
        count = 0; //resetting the count
    }
    printf("\nThe result was written into output.txt\n");
    fclose(write); //closing the file
    return 0;
}