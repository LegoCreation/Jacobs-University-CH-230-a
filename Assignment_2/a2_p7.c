/*
CH-230-A
a2_p7.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
int main(){
    int i = 8;
    while (i >= 4){
        printf("i is %d\n", i);
        i--; //The index variable must be inside the loop
    }
    printf("That's it.\n");
    return 0;
}
//In this program the curly braces for while loop was missing
