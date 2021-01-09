/*
CH-230-A
a6_p3.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#define min(a,b,c) (a*(a<b)*(a<c)+b*(b<a)*(b<c)+c*(c<a)*(c<b))
    //the above line uses computationally efficient method
    //to skip the if comparision
#define max(a,b,c) (a*(a>b)*(a>c)+b*(b>a)*(b>c)+c*(c>a)*(c>b))
    //the above line uses computationally efficient method
    //to skip the if comparision
#define mid_range(a, b,c) (min(a,b,c)+max(a,b,c))/2
int main(){
    float a,b,c; //three float inputs
    //inputs
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("The mid-range is: %.6f\n", mid_range(a,b,c));
    //printing the required value
    return 0;

}