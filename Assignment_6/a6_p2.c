/*
CH-230-A
a6_p2.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#define check(a){ \
    printf("The least significant bit is: %d\n", (a&1)); \
}
/*checks the first bit of the unsigned value a*/

int main(){
    unsigned char a; //unsigned character
    scanf("%c", &a);
    printf("The decimal representation is: %d\n", a);
    //prints the decimal value
    check(a);
    //call the macro
    return 0;
}