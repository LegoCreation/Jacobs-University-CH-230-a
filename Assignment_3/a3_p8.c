/*
CH-230-A
a3_p8.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>

float average(float v[], int size) {
    float sum = 0;
    //summing all the values of array
    for (int i = 0; i < size; ++i) {
        sum += v[i];
    }
    //To avoid 0/0 undefined expression as we count from 0
    if (size == 0) { 
        size++;
    }
    return (sum/size); // returns average = sum/size
}

float summation(float v[], int size) {
    float sum = 0;
    //summing all the values of array
    for (int j = 0; j < size; ++j) {
        sum += v[j];
    }
    return sum; //returns sum
}

int main(){
    //Declaration
    float value[10], dummy_variable;
    int counter = 0;
    //loop for the inputs
    while ((counter<10)){
        scanf("%f", &dummy_variable);
        //checking if our temporary value is -99.0
        if (dummy_variable == -99.0){
            break;
        }
        value[counter]=dummy_variable; //passing the value to array
        counter++;
    }
    printf("Sum: %f\n", summation(value, counter)); // passing by reference
    printf("Average:%f\n", average(value, counter)); // passing by reference
    return 0;
}