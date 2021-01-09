/*
CH-230-A
a6_p8.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
//defining the structure
struct list{
    int info;
    struct list *next; //pointing to the next element of the list
};
//function for appending the value to the first
struct list *append_first(struct list *lnk_list , int value){
    struct list *new;//defining the structure for new list
    //new = (struct list *) malloc(sizeof(struct list));
    //allocating the memory
    if (new == NULL){
        printf("Memory not allocated\n");
        return lnk_list;
        //if error allcating the memory
    }
    new->info = value; //storing the value
    new->next = lnk_list; //shifting the list
    return new; //returns the appended list
}
//function for appending the new value to the last
struct list *append_last(struct list *lnk_list , int value){
    struct list *new, *insert;//defining the structure and insertion point
    insert = lnk_list;
    new = (struct list *) malloc(sizeof(struct list));
    if (new == NULL) {
        printf ("Memory not allocated\n");
        return lnk_list;
        //if error in allocating memory
    }
    new->info = value; //storing the value
    new->next = NULL; //telling that it is the last element
    if (lnk_list == NULL) {
        return new;
    }
    //if the list is empty return the new value
    //loop for setting the insertion point (which is at the last here)
    while ( insert->next != NULL ){
        insert = insert->next;
    }
    insert->next = new;
    return lnk_list; //returns the modified list
}
//function for printing the list values
void print_list(struct list *lnk_list){
    while (lnk_list != NULL){ //loop until empty
        printf("%d ", lnk_list->info );
        lnk_list = lnk_list->next;
        //printing the list
    }
    printf("\n");
    return;
}
//function for deleting the list
void delete_list(struct list *lnk_list){
    struct list *nextelem;
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
//function for removing items
void remove_first_elem( struct list **lnk_list) {
    struct list *firstelem = *lnk_list ;
    if(*lnk_list == NULL){
        return;
        //nothing to remove if the list is empty
    }
    //otherwise free the first element
    *lnk_list = firstelem->next;
    free(firstelem);
    return;
}

#include <stdio.h>
int main(){
    //declarations
    int value;
    char c;
    struct list *lnk_list = NULL;
    lnk_list = (struct list*) malloc(sizeof(struct list));
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