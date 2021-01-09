/*
CH-230-A
a4_p10.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
void proddivpowinv(float a, float b, float*prod,
                    float*div,float*pwr, float*invb){
    *prod = a*b; //Computes the product
    *div = a/b; //Computes the division
    *pwr = pow(a,b); //computes b to the power of a
    *invb = ((float) 1)/b; //computes the inverse of b
    return;
}

int main(){
    float a, b, prod, div, pwr, invb; //declarations
    //Inputs
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    //Calling the function by reference
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    //Printings
    printf("Product of a and b is %f\n", prod);   
    printf("Division of a and b is %f\n", div);   
    printf("b to the power of a is %f\n", pwr);   
    printf("Inverse of b is %f\n", invb);   
    return 0;
}