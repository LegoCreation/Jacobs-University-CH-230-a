/*
CH-230-A
a7_p7
teststack.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include "stack.h"

int main()
{
	str *new_stack = (str*)malloc(sizeof(str));
    //allocating memory for 'new_stack'
	int n;
	char c; //new character for the infite loop input
	if(new_stack == NULL){
		printf("Memory not allocated\n");
		//exit if error in memory allocation
		exit(1);
	}
	new_stack->count = 0;//initialize counter
	while (1){
		scanf("%c", &c); //input
		switch (c){
			case 's':
				scanf("%d", &n);
				printf("Pushing ");
				push(n, new_stack); //pushing n to the top
				break;
			case 'p':
				printf("Popping ");
				new_stack = pop(new_stack);
				//popping
				break;
			case 'e':
				empty_stack(new_stack); //emptying the stack
				break;
			case 'q':
				printf("Quit\n");
				free(new_stack); //deallocation
				exit(0);
            	//exit
		}
	}
}