/*
CH-230-A
a5_p1.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
//function to print the triangles
void print_triangles(char ch, int n){
    //Nested loop
    for (int j = 0; j<n; j++){
        //as the its an inverted triangle
        //we have to start from n for the
        //first loop
        for (int i = n; i > ; i){
            printf("%c", ch); //prints the value
        }
        printf("\n"); //prints the new line
    }
    return;
}
int main(){
    //Declarations
    int n; 
    char ch; 
    //Inputs
    scanf("%d", &n); //taking the integer
    getchar(); //taking the enter key
    scanf("%c", &ch); //taking the character
    print_triangles(ch, n);//callind the funcntion
    return 0;
}