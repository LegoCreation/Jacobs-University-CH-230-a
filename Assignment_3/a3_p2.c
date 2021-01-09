/*
CH-230-A
a3_p2.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include "stdio.h"
int main(){
    //Declarations
    char ch; 
    int n;
    int counter = 0;
    //Inputs
    printf("Enter a lowercase character ");
    scanf("%c",&ch); //for the float value
    getchar();
    printf("Enter an integer ");
    scanf("%d",&n); //for the integer value
    //Printing
    while(counter<=n){ //loop until the value is printed n times
        printf("%c\n", ch - counter);
        counter++; //alternatively n=n-1; 
    }
    return 0;
}