/*
CH-230-A
a7_p2.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    char data;
    struct node *next;
    struct node *prev;
} dll;
//struct Node* head;
dll *append_first(dll*lnk_list , char value){
    dll* new = (dll*) malloc(sizeof(dll));
    //allocating the memory
    if (new == NULL){
        printf("Error allocating the memory\n");
        return lnk_list;
        //if error allcating the memory
    }
    new->data = value; //storing the value
    new->prev = NULL;
    if (lnk_list != NULL) lnk_list->prev = new;
    new->next = lnk_list;
    lnk_list = new;
    return lnk_list; //returns the appended list
}
void print_list(dll *doubly_lnk_list){
    while (doubly_lnk_list != NULL){ //loop until empty
        printf("%c ", doubly_lnk_list->data);
        doubly_lnk_list = doubly_lnk_list->next;
        //printing the list
    }
    printf("\n");
    return;
}

void print_reverse_list(dll *list){
    dll* temp;
    temp = (dll*)malloc(sizeof(dll));
    if (temp == NULL){
        printf("Error allocating the memory\n");
        return;
    }
    temp = list;
    if (temp == NULL) return;
    //loop for moving the cursor to the last
    while (temp->next != NULL){
        temp = temp->next; //goto next poisition
    }
    //loop for printing the list in reverse order
    while (temp != NULL){
        printf("%c ", temp->data);
        temp = temp->prev; //goto previous position
    }
    printf("\n");
    return;
}
void findandremove(dll** head, dll* list, char value){
    int flag = 0;
    while (list!= NULL){
        if (list->data == value){
            flag = 1; //character is in the list
            if (list->next != NULL) { //if last element
                list->next->prev = list->prev; 
            }
            if (list->prev != NULL) { //if not the first element
                list->prev->next = list->next;
            }
            if (list->prev == NULL){ //if the first element
                *head = list->next;
            }
        }
            list = list->next;
    }
    //if flag = 0 then it is not in the list
    if(!flag) printf("The element is not in the list!\n");
    return;
}
void delete_list(dll *lnk_list){
    dll *nextelem;
    while (lnk_list != NULL) {//loop until empty
        nextelem = lnk_list->next;
        //decreasing the list
        free (lnk_list);
        //freeing the list
        lnk_list = nextelem;
        //substituting the shortened list
    }
    return;
}
int main(){
    //declarations
    char value, i;
    int n;
    scanf("%d", &n); //inputs
    getchar();
    //loop until break
    dll* list = NULL;
    while(1){
        switch (n){
            case 1: //if 1 is pressed
                scanf("%c", &value); //input
                list = append_first(list, value);
                //adds the new value to the beginning of the list
                break;
            case 2: //if 2 is pressed
                scanf("%c", &i); //input for the character
                findandremove(&list, list, i);
                break;
            case 3: //if 3 is pressed
                //prints the list
                print_list(list);
                break;
            case 4: //if 4 is pressed
                //prints the list in the reverse order
                print_reverse_list(list);
                break;
            case 5: //if 5 is pressed
                //deletes the list
                delete_list(list);
                return 0;
        }
        scanf("%d", &n); //asks for the next value of n
        getchar();
    }
}