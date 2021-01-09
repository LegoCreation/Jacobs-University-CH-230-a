/*
CH-230-A
a3_p7.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
void print_form(int n, int m, char c){
    //Nested loop
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m + i; j++){
            printf("%c", c); //prints the character
        }
        printf("\n"); //gets a new line
    }
    return;
}
int main(){
    //Declarations
    int a, b;
    char ch;
    //Inputs
    scanf("%d", &a);
    scanf("%d", &b);
    getchar();
    scanf("%c", &ch);
    //Printing by calling a function
    print_form(a, b ,ch);
    return 0;
}