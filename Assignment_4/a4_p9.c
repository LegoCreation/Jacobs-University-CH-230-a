/*
CH-230-A
a4_p9.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include "stdlib.h"
int prodminmax(int arr[], int n){
    int min = arr[0]; //setting the minimum value to 1st element
    int max = arr[0]; //setting the maxest value to 1st element
    for (int i = 0; i<n; i++){ //loop until n
        min = (1-(arr[i] <min))*min + arr[i] * (arr[i] < min);
        //The above line uses computationally efficient method to skip
        //the 'if' comparision. if arr[i] is the smaller than the variable
        //'min' then it will compute 0*min+arr[i]*1 => arr[i], which is
        //same as appending the minimum value using if statement. :)
        max = (1-(arr[i] > max))*max + arr[i] * (arr[i] > max);
        //same reasoning as min
        
    }
    return min*max; //returns the minimum value
}

int main(){
    //Declarations
    int n;
    int* arr;
    //Inputs
    printf("How many integers do you want to enter? ");
    scanf("%d", &n);
    arr = (int*) malloc(sizeof(int)*n); //Allocating the memory
    if (arr==NULL){ //if the input value is invalid
        printf("No memory allocated\n");
        return 0; //ends the program here
    }
    for (int i = 0; i< n; i++){ //loop until the entered value
        scanf("%d", arr+i);
    }
    printf("The product of minimum and maximum is %d\n", prodminmax(arr,n));
    free(arr); //deallocating the memory
    return 0;
}