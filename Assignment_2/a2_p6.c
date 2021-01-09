/*
CH-230-A
a2_p6.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include "stdio.h"
int main(){
    //Declarations
    double x, y;
    double *ptr_one, *ptr_two,*ptr_three;
    //Inputs
    scanf("%lf",&x);
    scanf("%lf",&y);
    //Computations
    ptr_one = &x; //returns the memory address of x
    ptr_two = &x; //returns the memory address of x
    ptr_three = &y; //returns the memory address of y
    //Printing the values
    //Note that, in C, %p is the format specifier for the pointers
    printf("Address of ptr_one=%p\n", ptr_one);
    printf("Address of ptr_two=%p\n", ptr_two);
    printf("Address of ptr_three=%p\n", ptr_three);
    return 0;
}