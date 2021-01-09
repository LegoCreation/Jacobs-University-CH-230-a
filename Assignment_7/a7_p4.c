/*
CH-230-A
a7_p4.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
void pu(char* str){
    int i = 0; //index varaible for while
    while (*(str+i)!='\0'){ //checking the string ends
        printf("%c", toupper(*(str+i)));
        i++; //adding the index by 1 per loop
    }
    return;
}
void pl(char* str){
    int i = 0; //index varaible for while
    while (*(str+i)!='\0'){ //checking the string ends
        printf("%c", tolower(*(str+i)));
        i++; //adding the index by 1 per loop
    }
    return;
}
void pt(char* str){
    int i = 0; //index varaible for while
    while (*(str+i)!='\0'){ //checking the string ends
        if(*(str+i) == tolower(*(str+i))){
            printf("%c", toupper(*(str+i)));
            //toggle the case
        }
        else{
            printf("%c", tolower(*(str+i)));
            //toggle the case
        }
        i++; //adding the index by 1 per loop
    }
    return;
}
int main(){
    void (*fptr[3])(char*);
    char* str;
    char n;
    str = (char*)malloc(sizeof(char)*100);
    if (str==NULL){
        printf("Memory not allocated");
        //check memory allocation
        exit(1);
    }
    //taking string as input
    fgets(str,sizeof(char)*100,stdin);
    fptr[0] = &pu; //pass to function pointer
    fptr[1] = &pl; //pass to function pointer
    fptr[2] = &pt; //pass to function pointer
    scanf("%c", &n);
    while(n!='4'){ 
        while(n>='1' && n<='3'){
            fptr[n-49](str); //call the function pointer
            //e.g. when we press '1' we get fptr[0] which
            //     which is the function pointer of the
            //     upper case function
            break;
        }
        scanf("%c", &n); //take the next input
    }
    free(str); //deallocating the memory
    return 0;
}