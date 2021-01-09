/*
CH-230-A
a4_p4.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
int count_consonants(char str[]){
    int c = 0; //counter variable
    int num = 0; //returning variable
    char vowel[5] = {'A','E','I','O','U'}; //array of vowel
    int boolean_c; //for the computational purpose
    int check; //varible for checking if it is an alphabet
    if (str[0]=='\n') return -1; //for invalid string
    while (str[c]!='\n'){ //loop until Enter value
        boolean_c = 1; 
        //we assume our boolean is true as we are checking the
        //contradictions
        for (int i = 0; i<5;i++){
            boolean_c = boolean_c && (str[c] != vowel[i]);
            boolean_c = boolean_c && (str[c] != (vowel[i]+32));
            //the common difference between the lowercase and 
            //uppercase is 32.
        }
        //checking if the enter string contains alphabets
        check = (str[c]>='a' && str[c]<='z') || (str[c]>='A' && str[c]<='Z');
        boolean_c = boolean_c && check;
        num += boolean_c; //summing 1 if all the conditions were satisfied
        c++; //adding the counter
    }
    return num; //returns the number of consonants
}
int main (){
    //Declarations
    char c[100];
    while (1){
        fgets(c, 100, stdin); //Taking the input
        if (c[0]=='\n') { //if pressed enter then exit
            break; //exits from while loop
        }
        if (count_consonants(c)!=-1){ //prints only if the string is valid
            printf("Number of consonants=%d\n",count_consonants(c));
        }
    
    }
    return 0;
}