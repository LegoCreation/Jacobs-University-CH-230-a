/*
CH-230-A
a2_p10.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include "stdio.h"
int main(){
    //Declarations
    int n, counter;
    n = 0; //setting the initial value 
    counter = 0; //setting the initial value of the counter

    //Computation for a wrong input
    while(n<=0){ //loop if the value of n is still zero
        printf("Type an positive definite integer n: ");
        scanf("%d",&n); //input
    }

    //Computation for creating a table using while loop
    while (counter<n) { //loop until the value of counter is (n-1)
        counter++; //adds 1 to the counter variable on every loop
        if (counter == 1){ //1 days is grammatically incorrect :)
            printf("%d day = %d hours\n", counter, counter * 24);
        }
        else {
            printf("%d days = %d hours\n", counter, counter * 24);
        }
    }
    return 0;
    
}

/* 
Here the loop with go from 0 to (n-1), but the value will be compiled
from 1 to n because the counter++; is defined before the printing statement.
*/