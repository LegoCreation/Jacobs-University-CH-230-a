/*
CH-230-A
a5_p10.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
//recursive function
void ints(int n){
    if (n <= 0){
        return; //basic step
    }
    printf("%d ", n);
    ints(n-1); //recursive step
    return;
}
int main (){
    int n;
    printf("Enter an Integer: ");
    scanf("%d", &n);
    ints(n); //calling the function 
    return 0;
}