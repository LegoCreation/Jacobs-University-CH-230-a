/*
CH-230-A
a7_p7
stack.h
Shishir Sunar
ssunar@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
typedef struct stack // declaration of struct type
{
	unsigned int count;
	int arr[12];
} str;
//functions declarations
struct stack *pop (str* stk);
void push (int new_value, str* stk);
void empty_stack(str* stk);