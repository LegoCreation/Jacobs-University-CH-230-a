/*
CH-230-A
a3_p10.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
//funciton for doing product by value
float product(float a, float b){
    return a*b;
}
//function for doing product by reference
void productbyref(float a, float b, float *p){
    *p = a * b;
    return;
}
//function for modifying value by reference
void modifybyref(float *a, float *b){
    *a=+3;
    *b=+11;
    return;
}
int main(){
    //Declarations
    float a, b, p;
    //Inputs
    scanf("%f", &a);
    scanf("%f", &b);
    //Printings
    printf("Product by value %f\n", product(a, b));
    productbyref(a,b,&p); //calling the function
    printf("Product by reference %f\n", p);
    modifybyref(&a, &b); //calling the function
    printf("Modified value of a and b by reference %f %f\n", a, b);
    return 0;
}