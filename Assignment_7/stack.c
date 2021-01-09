/*
CH-230-A
a7_p7
stack.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include "stack.h"

struct stack *pop(str* stk){ //for poping top element from the stack
	if (stk->count==0){	//checking if the stack is empty
		printf ("Stack Underflow\n");
	}
	else{
		printf ("%d\n", stk->arr[stk->count - 1]);
		//as we count from 1 in real life
		stk-> count--;
	}
	return stk;
}

void push(int data, str* stk){
//for pushing 'data' to top of 'stk'
	if (stk -> count >= 12){
	printf ("Stack Overflow\n");
	}
	else
	{
		stk -> arr[stk->count] = data;
		stk -> count++;
		printf ("%d\n", data);
	}
	return;
}

void empty_stack(str* stk){ //for emptying the stack
	printf ("Emptying Stack ");
	while (stk -> count != 0){
		printf ("%d ", stk->arr[stk -> count-1]);
		//as we count from one in real life
		stk->count--;
	}
	printf("\n");
	return;
}