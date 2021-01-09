/*
CH-230-A
a3_p4.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
int position(char str[], char c) {
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){
        //Do nothing
    }
    return idx;
}
int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
    return 0;
}
/* the return idx falls inside the 'for' loop if we omit
   the curly braces so the function will return only
   the first value which is equals to zero. But if we add
   the braces, then the loop will end, and the final value of
   idx will be the position of the character in the string.
*/