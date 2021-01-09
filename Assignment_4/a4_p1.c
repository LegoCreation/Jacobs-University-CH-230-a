/*
CH-230-A
a4_p1.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
int main(){
    //Declarations
    float upper,lower,steps;
    //Inputs
    scanf("%f",&lower);
    scanf("%f",&upper);
    scanf("%f",&steps);
    //Loops and Printing the table
    for(float i = lower;i<=upper;i+=steps){
        printf("%f %f %6.2f\n", i, i*i*M_PI, 2*i*M_PI);
        //The above line prints the radius, Area, and Circumference
    }
    return 0;
}