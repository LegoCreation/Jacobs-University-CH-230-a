/*
CH-230-A
a5_p11.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include<stdio.h>


int prime (int m, int i){
//function for recursion
    if (m == 0 || m == 1){ //basic step
        return 0;
    }

    if(i == 1){
        return 1; //basic step
    }

    else{
        if (m % i == 0){
            return 0; //endss if divisible
        }

        else{
            return prime(m, i - 1); //does the recursion
        }
    }
    return 0;
}
int main(){
    int m; //taking the input
    scanf("%d", &m);\
    int i, check;
    i = m/2;
    //calling the function
    check = prime(m, i);
    //printings
    if (check == 1){
        printf("%d is prime\n", m);
    }
    else{
        printf("%d is not prime\n", m);
    }
    return 0;
}
