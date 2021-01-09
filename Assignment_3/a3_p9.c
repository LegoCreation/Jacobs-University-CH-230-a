/*
CH-230-A
a3_p9.c
Shishir Sunar
ssunar@jacobs-university.de
*/

//function for returning the sum of position 2 and 5
double sum25(double v[], int n){
    if (n>=6){ //checking if position 2 and 5 are valid
        return v[2]+v[5];
    }
    else {
        return -111; //returns -111 if invalid
    }
}
#include <stdio.h>
int main(){
    //Declarations
    double arr[20];
    int n;
    //Inputs
    scanf("%d", &n);
    //Loop for taking double values
    for(int i = 0; i<n; i++){
        scanf("%lf", &arr[i]);
    }
    //Computations and Printings
    if (sum25(arr, n) == -111){
        printf("One or both positions are invalid\n");
    }
    else{
        printf("sum=%lf\n", sum25(arr, n));
    }
    return 0;
}