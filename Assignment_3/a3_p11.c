/*
CH-230-A
a3_p11.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int main(){
    //Declarations
    char one[100];
    char two[100];
    char temp[100];
    char three[100];
    char c;
    char *postition_ptr;
    //Inputs
    fgets(one,sizeof(one),stdin);
    fgets(two,sizeof(two),stdin);
    //for removing the new line entered while pressing enter key
    if( one[strlen(one)-1] == '\n' ){
        one[strlen(one)-1] = 0;
    }
    if( two[strlen(two)-1] == '\n' ){
        two[strlen(two)-1] = 0;
    }
    scanf("%c", &c);
    //Printing and computations
    printf("length1=%lu\n", strlen(one));
    printf("length2=%lu\n", strlen(two));
    /*As the strcat joins the second string to first one,
      the value of the first string is changed, which is
      unwanted. So, I created a temporary variable to
      do the job. :)
    */
    strcpy(temp,one); //copying one to temp
    printf("concatenation=%s\n", strcat(temp,two)); //concatenation
    strcpy(three, two); //copying two to three (new variable)
    printf("copy=%s\n", three);
    //using strcmp to compare the srings
    if(strcmp(one, two)<0)
    {
        printf("one is smaller than two\n");
    }

    else if (strcmp(one,two)>0){
        printf("one is larger than two\n");
    }
    else{
        printf("one is equal to two\n");
    }
    //loop for finding a character in string
    postition_ptr = strchr(two, c);
    if (postition_ptr==NULL){ //if the character is not in the string
        printf("The character is not in the string\n");
    }
    else {
        printf("position=%d\n", (int) (postition_ptr-two));
    }
/*
    for (int i = 0; i<strlen(two);i++){
        if (two[i] == c){
            printf("position=%d\n", i);
            break;
        }
        else if(i == (strlen(two)-1)){//if the character is not in the string
            printf("The character is not in the string\n");
        }
    }
*/
    return 0;
}