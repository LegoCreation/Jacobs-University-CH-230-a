/*
CH-230-A
a7_p1
use_linked_list.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h" //includes the header file
//defining the structure
struct list{
    int info;
    struct list *next; //pointing to the next element of the list
};
int main(){
    //declarations
    int value;
    char c;
    struct list *lnk_list = NULL;
    scanf("%c", &c); //inputs
    //loop until break
    while(1){
        switch (c){
            case 'a': //if a is pressed
                scanf("%d", &value); //input
                //appends the list from the last
                lnk_list = append_last(lnk_list,value);
                break;
            case 'b': //if b is pressed
                scanf("%d", &value);
                //appends the list from the first
                lnk_list = append_first(lnk_list,value);
                break;
            case 'p': //if p is pressed
                //prints the list
                print_list(lnk_list);
                break;
            case 'r': //if r is pressed
                //removes the first element of the list
                remove_first_elem(&lnk_list);
                break;
            case 'q': //if q is pressed
                //deletes the list
                delete_list(lnk_list);
                return 0;
        }
        scanf("%c",&c); //asks for the next value of c
    }
    return 0;
}