/*
CH-230-A
a3_p6.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
//function for conversion
float to_pounds(int kg, int g){
    return (((float) kg) * 2.2) + (((float) g) * 2.2 / 1000);
    // 1 kg = 1000 g -> 1 g = 2.2/1000 pounds
}
int main(){
    //Declarations
    int a, b;
    //Inputs
    scanf("%d", &a);
    scanf("%d", &b);
    //Printings
    printf("Result of conversion: %f\n", to_pounds(a, b));
    return 0;
}