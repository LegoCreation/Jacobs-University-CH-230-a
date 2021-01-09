/*
CH-230-A
a4_p3.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
float geometric_mean(float array[], int num){
    float gm = 1; //setting gm to 1 as 1 the multiplicative identity
    for (int i = 0; i<num; i++){
        gm *= array[i]; //multiplying i-th element to gm
    }
    return pow(gm, 1/(float)num); //return the geometric mean
}
float lowest(float array[], int num){
    float low = array[0]; //setting the lowest value to 1st element
    for (int i = 0; i<num; i++){
        low = (1-(array[i] <low))*low + array[i] * (array[i] < low);
        //The above line uses computationally efficient method to skip
        //the 'if' comparision. if array[i] is the lower than the variable
        //'low' then it will compute 0*low+array[i]*1 => array[i], which is
        //same as appending the lowest value using if statement. :)
    }
    return low; //returns the lowest value
}
float highest(float array[], int num){
    float high = array[0]; //setting the highest value to 1st element
    for (int i = 0; i<num; i++){
        high = (1-(array[i] > high))*high + array[i] * (array[i] > high);
        //Same reasoning as for the taking out the highest value
    }
    return high; //returns the highest value
}
float sum(float array[], int num){
    float sum;
    for (int i = 0; i<num; i++){
        sum += array[i]; //summing the value of the i-th element
    }
    return sum; //returns the sum
}

int main(){
    //Declarations
    float array[15], dummy_variable; 
    int cnt = 0; //counter for while
    char c; //variable for taking the character
    //loop for the inputs
    while ((cnt<10)){
        scanf("%f", &dummy_variable);
        //checking if our temporary value is less than 0
        if (dummy_variable < 0){
            break;
        }
        array[cnt]=dummy_variable; //passing the value to array
        cnt++;
    }
    getchar(); //for taking the Enter key
    printf("Enter a character: ");
    scanf("%c", &c); //taking the character input
    switch ((int) c) { //checking for character c by converting it into ascii
        case ((int) 'm'):
            //calls the geometric_mean function
            printf("The geometric mean is %f\n", geometric_mean(array, cnt));
            break;
        case ((int) 'h'):
            //calls the highest function
            printf("The highest value is %f\n", highest(array, cnt));
            break;
        case ((int) 'l'):
            //calls the lowest function
            printf("The lowest value is %f\n", lowest(array, cnt));
            break;
        case ((int) 's'):
            //calls the sum function
            printf("The sum is %f\n", sum(array, cnt));
            break;
    }
    return 0;
}