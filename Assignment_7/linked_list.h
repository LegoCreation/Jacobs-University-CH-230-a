/*
CH-230-A
a7_p1
linked_list.h
Shishir Sunar
ssunar@jacobs-university.de
*/
#ifndef linked_list_h
#define linked_list_h
//list of the functions
struct list *append_first(struct list *lnk_list , int value);
struct list *append_last(struct list *lnk_list , int value);
void print_list(struct list *lnk_list);
void delete_list(struct list *lnk_list);
void remove_first_elem( struct list **lnk_list);
#endif