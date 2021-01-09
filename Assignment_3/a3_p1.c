/*
CH-230-A
a3_p1.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include "stdio.h"
int main(){
    //Declarations
    float x; 
    int n;
    //Inputs
    scanf("%f",&x); //for the float value
    scanf("%d",&n); //for the integer value
    while(n<=0){  //only accepting positive definite values
        printf("Input is invalid, reenter value\n");
        scanf("%d",&n);
    }
    //Printing
    while(n>0){ //loop until the value is printed n times
        printf("%f\n", x);
        n--; //alternatively n=n-1; 
    }
    return 0;
}