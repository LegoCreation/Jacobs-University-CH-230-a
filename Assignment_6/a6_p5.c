/*
CH-230-A
a6_p5.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
int main(){
    unsigned char a; //declaring the unsigned character as a
    int max_used_bits;
    scanf("%c", &a);
    printf("The decimal representation is: %d\n", a);
    printf("The backwards binary representation is: ");
    //loop for finding the used bits
    for (int i = 7; i!=0;i--){
        if((a&(1<<i))!=0){
            max_used_bits = i;
            break;
        }
    }
    //loop for reflecting the bits horizontally
    for (int i = 0; i<=max_used_bits; i++){
        printf("%d",(a&(1<<i))!=0);
        //using a mask to run over the bits
    }
    printf("\n");
    return 0;
}