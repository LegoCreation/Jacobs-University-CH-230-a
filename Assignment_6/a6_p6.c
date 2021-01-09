/*
CH-230-A
a6_p6.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
void set_bit(unsigned char*);
int main(){
    unsigned char a; //declaring the unsigned character as a
    int max_used_bits = 8; //setting the max bits to 8
    scanf("%c", &a);
    printf("The decimal representation is: %d\n", a);
    printf("The backwards binary representation is: ");
    set_bit(&a);
    printf("%d", a);
    //loop for reflecting the bits horizontally
    printf("\n");
    return 0;
}

void set_bit(unsigned char* a){
    for (int i = 0; i< 8; i++){
        *a ^= 1 << i;
    }
}