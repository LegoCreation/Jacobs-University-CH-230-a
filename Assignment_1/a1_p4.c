/*
CH-230-A
a1_p4.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h>
int main(){
    int x,y,sum,product,difference,remainder;
    float division;
    x = 17; y = 4;
    printf("x=%d\ny=%d\n", x,y); //prints x & y
    sum = x + y;
    product = x * y;
    difference = x - y;
    division = x/(float) y;
    remainder = x % y;
    printf("sum=%d\n",sum);       //prints the sum
    printf("product=%d\n",product);   //prints the product
    printf("difference=%d\n",difference);//prints the difference
    printf("division=%f\n",division);  //prints the division
    printf("remainder of division=%d\n",remainder);       //prints the remainder
    return 0;
}