/*
CH-230-A
a2_p3.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include "stdio.h"
int main(){
    //Declarations
    int weeks, days, hours, total_hours;
    //Inputs
    printf("Weeks = ");
    scanf("%d",&weeks);
    printf("Days = ");
    scanf("%d",&days);
    printf("Hours = ");
    scanf("%d",&hours);
    //Calculation
    total_hours = (weeks * 7 * 24) + days * 24 + hours;
    //Printing the values
    if(total_hours == 1){ //1 hours is grammatically incorrect
        printf("Total hour = %d\n",total_hours);
    }
    else {
        printf("Total hours = %d\n",total_hours);
    }
    return 0;
}