/*
CH-230-A
a6_p7.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
unsigned char set3bits(unsigned char a, int x, int y, int z){
    unsigned char b;
    b = (a|(1<<x)); //sets the specific bit 'on'
    b = (b|(1<<y)); //same as first
    b = (b|(1<<z)); //same as second
    return b; //returning the shifted value as unsigned character
}

int main(){
    //declarations
    unsigned char a; //declaring the unsigned character as a
    unsigned char return_value;
    int x,y,z; //bits positions to be changed
    int max_bits = 8; //setting the max bits to 8
    //inputs
    scanf("%c", &a);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    //printing and computations
    printf("The decimal representation is: %d\n", a);
    printf("The binary representation is: ");
    for (int i = max_bits-1; i>=0; i--){
        printf("%d",(a&(1<<i))!=0);
        //using a mask to run over the bits from left
    }
    printf("\nAfter setting the bits: ");
    return_value = set3bits(a,x,y,z);
    for (int i = max_bits-1; i>=0; i--){
        printf("%d",(return_value&(1<<i))!=0);
        //using a mask to run over the bits from left
    }
    printf("\n");
    return 0; //end
}