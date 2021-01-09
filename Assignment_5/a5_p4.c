/*
CH-230-A
a5_p4.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
//function for division by 5
void divby5(float arr[], int size){
    for (int i=0;i<size;i++){ //loop until size
        arr[i]/=(float) 5; //divide by 5
    }
    return;
}

int main(){
    float *d_arr;
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n); //taking integer input
    d_arr = (float*) malloc(sizeof(float) * n);
    if (d_arr == NULL) { 
        printf("Memory not allocated.\n"); 
        return 0; 
        //exit if invalid memory allocation
    }
    for(int i = 0; i < n; i++){
        scanf("%f", &d_arr[i]);//taking the double inputs
    }
    divby5(d_arr,n); //calling the function
    printf("After division by 5:\n");
    for (int j = 0; j<n; j++){ //loop until 6
        printf("%.3f\n",d_arr[j]); //print the modified value
    }
    free(d_arr);//deallocating the memory
    return 0;
}