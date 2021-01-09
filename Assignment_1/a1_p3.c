/*
CH-230-A
a1_p3.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h> // include --> #include
int main() {
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5; // int --> float
    result = a / b;
    printf("The result is %f\n", result); // %d --> %f
    return 0;
}

/*
I have mentioned the debugged part within the line.
There was a syntax error on line 8 so the code did not compile.
There were two logical errors on line 12 and 14.
On line 12, we were trying to store float value in an integer 
variable, and on line 14, we tried to print a floating value with
a wrong format specifier
*/