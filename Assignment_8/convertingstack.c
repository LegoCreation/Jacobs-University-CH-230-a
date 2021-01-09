/*
CH-230-A
a8_p4
convertingstack.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include "stack.h"

int main()
{
	str *new_stack = (str*)malloc(sizeof(str));
    //allocating memory for 'new_stack'
	unsigned int n; //initialize the unsigned int
	scanf("%u", &n);
	if(new_stack == NULL){
		printf("Memory not allocated\n");
		//exit if error in memory allocation
		exit(1);
	}
	new_stack->count = 0;//initialize counter
	printf("The binary representation of %u is ", n);
	while(n!=0){ //division until 0
		push((n%2), new_stack); //push the new value to the stack
		n = n / 2;//doing the floor division
	}
	while(new_stack->count!=0){
		pop(new_stack); //printing the stack by popping the values
	}
	printf(".\n");
	return 0;
}