/*
CH-230-A
a5_p2.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
//function for division by 5
void divby5(float arr[], int size){
    for (int i=0;i<size;i++){ //loop until size
        arr[i]/=(float) 5; //divide by 5
    }
    return;
}

int main(){
    float a[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    printf("Before:\n");
    for (int i = 0; i<6;i++){ //loop until 6
        printf("%.3f ",a[i]); //print the previous value
    }
    divby5(a, 6); //calling the function
    printf("\nAfter:\n");
    for (int i = 0; i<6;i++){ //loop until 6
        printf("%.3f ",a[i]); //print the modified value
    }
    printf("\n");
    return 0;
}