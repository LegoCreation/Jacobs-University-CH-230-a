/*
CH-230-A
a3_p3.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include "stdio.h"
float convert(int cm){ //function for conversion in kilometer
    return cm / 100000.0; //returns the converted value
}
int main(){
    int value; //value in centimeter
    scanf("%d", &value);
    printf("Result of conversion: %f\n", convert(value));
    //The above statement calls the function and prints it
    return 0;

}