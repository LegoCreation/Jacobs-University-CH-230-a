/*
CH-230-A
a2_p4.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include "stdio.h"
int main(){
    //declarations
    float a,b,h;
    float area_square,area_rectangle;
    float area_triangle, area_trapezoid;
    //Inputs
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&h);
    //Calculations
    area_square = a * a;
    area_rectangle  = a * b;
    area_triangle = (1.0/2.0) * a * h;
    area_trapezoid = (1.0/2.0) * (a + b) * h;
    //Printing the values
    printf("square area=%f\n", area_square);
    printf("rectangle area=%f\n", area_rectangle);
    printf("triangle area=%f\n", area_triangle);
    printf("trapezoid area=%f\n", area_trapezoid);
    return 0;
}