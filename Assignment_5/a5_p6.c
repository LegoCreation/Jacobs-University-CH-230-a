/*
CH-230-A
a5_p6.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>

int count (float* array){
    int count = 0;
    while (1){
        if (*array < 0){
            break; //stop if negative value
        }
        else {
            count++; //increment to the counter 
        }
        array++; //increment of array position #pointer arithematic
    }
    return count; //returns the number of positive value encountered
}

int main (){
    //Declarations
    float array[100];
    int n;
    scanf ("%d", &n); //Inputs
    for (int i = 0; i < n; i++){
        scanf ("%f", &array[i]); //taking value
    }
    //calling the function and printing
    printf ("Before the first negative value: %d elements\n", count(&array[0]));
    return 0;
}