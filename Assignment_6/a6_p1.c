/*
CH-230-A
a6_p1.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
//macro declaration
#define swap(a,b,type){\
    type temp = a; \
    a = b; \
    b = temp; \
}
//storing a in some temporary variable
//and putting the value of b in a. 
//so they successfully get swapped
int main(){
    int a,b;
    double d_a,d_b;
    //inputs
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &d_a);
    scanf("%lf", &d_b);
    //calling the macro
    swap(a,b,int);
    swap(d_a,d_b,double);
    //printing the results
    printf("After swapping:\n%d\n%d\n%.6lf\n%.6lf\n",a,b,d_a,d_b);
    return 0;
}