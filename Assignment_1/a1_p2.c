/*
CH-230-A
a1_p2.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h>
int main() {
	int result; /* The result of our calculation */
	result = (2 + 7) * 9 / 3;
	printf("The result is %d\n",result);
	return 0;
}
/*
We did not specify which variable to be printed in the printf function.
But it is very legal in C because C does not know nothing about printf.
So, it is not syntax error, but like a semantic error. The output values 
varies with different compilers.
*/


