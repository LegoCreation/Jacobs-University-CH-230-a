/*
CH-230-A
a4_p6.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void greatests(int arr[], int n){
    int high1 = -32768; 
    int high2= -32768;
    //setting the initial value to the smallest value of integer
    //setting the initial value to the smallest value of integer
    for (int j = 0; j< n; j++){
        if(arr[j] > high1) { //if greater than the greatest
            high2 = high1; 
            //store the previous greatest value in second greatest
            high1 = arr[j];
            //modify the greatest value by current value
        }
        else if( arr[j] > high2 ) { //if greater than the second greatest
            high2 = arr[j];
            //modify the second greatest by current value
        }
    }
    printf("The greatest values is %d\n", high1);
    printf("The second greatest values is %d\n", high2);
    return;
}
int main(){
    //Declarations
    int n;
    int* d_arr;
    //Inputs
    printf("How many integers do you want to enter? ");
    scanf("%d", &n);
    d_arr = (int*) malloc(sizeof(int)*n); //Allocating the memory
    if (d_arr==NULL){ //if the input value is invalid
        printf("No memory allocated\n");
        return 0; //ends the program here
    }
    for (int i = 0; i< n; i++){ //loop until the entered value
        scanf("%d", d_arr+i);
    }
    greatests(d_arr,n); //calls the funtion
    free(d_arr); //frees the allocated memory
    return 0;
}
