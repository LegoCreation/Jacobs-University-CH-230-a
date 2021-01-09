/*
CH-230-A
a2_p8.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h>
int main() {
    int value; //declaration
    scanf("%d",&value); //input
    //Computations
    if ((value % 2 == 0) && (value % 7 == 0)) { //if divisible by 2 and 7
        printf("The number is divisible by 2 and 7\n");
    }
    else { //if the vlaue is not divisible by both 2 and 7
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
    
}
