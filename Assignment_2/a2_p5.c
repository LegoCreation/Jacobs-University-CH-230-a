/*
CH-230-A
a2_p5.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include "stdio.h"
int main(){
    //Declarations
    int a;
    int *ptr_a;
    printf("Enter an integer");
    scanf("%d",&a); //taking the input
    printf("The value that you entered=%d\n", a);
    ptr_a = &a; //taking the memory address of variable a
    printf("Address of the pointer variable=%p\n", ptr_a);
    *ptr_a = *ptr_a + 5; //addition using pointer variable
    printf("New value of a=%d\n", a); //printing the new value of a
    printf("Address of the pointer variable=%p\n", &a);
    //Note that, in C, %p is the format specifier for the pointers
    return 0;
}