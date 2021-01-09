/*
CH-230-A
a4_p12.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
//function for replacing the characters in the string
void replaceAll(char* str, char c, char e){
    int i=0; //initializing the counter for while
    while( *(str+i) != '\n'){ //loop until the last value
        if( *(str+i)==c){ //if matched
            *(str+i)=e; //modification by pointer
        }
        i++; //adding 1 per loop
    }
    return;
}
int main(){
    //Declarations
    char string[80] ,p_string[80], dummy_variable[80];
    char c, e;  
    //loop for inputs and calling the function
    while (1){ //loop until break
        printf("Enter a string (Enter stop to end):\n");
        fgets(dummy_variable,80,stdin); //takes the input
        if (strcmp(dummy_variable,"stop\n")==0){ //if stop is entered
            break; //stop the program if stop is entered
        }
        //copying to string from dummy variable
        strcpy(string,dummy_variable); 
        //copying to p_string from dummy variable
        strcpy(p_string, dummy_variable);
        printf("Find: ");
        scanf("%c", &c); //character to be found
        getchar(); //to get the entered key
        printf("Replace with: ");
        scanf("%c", &e); //character to replace the c
        getchar(); //to get the entered key
        //Printing the processed value
        replaceAll(string, c, e); //calling the function
        printf("\nCharacter to be replaced: %c\n", c);
        printf("Character replaced with: %c\n", e);
        printf("Before replacement: %s", p_string); //print the replaced string
        printf("After replacement: %s\n",string); //print the replaced string
    }
    return 0;
}