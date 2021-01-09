/*
CH-230-A
a1_p1.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h>

int main() {
	double result; /*The result of our calculation */
	result = (3.0+1.0)/5.0;
	printf("The value of 4/5 is %lf\n", result);
	return 0;
}
/*
 In the bugged program we were trying to do mathematical operation
 in integer and store in a double variable. The compiler would simply
 do the mathematical operation as follows:
 (3+1)/5
 =4/5
 =floor(4/5) (As we are doing divisions of integer floor function comes in play)
 =0

 As the data type of our variable is double, it just adds more precision to
 our integer value i.e. 0==>0.000000. So we miss our expected value

 But as we add some level of precision to our integer data, our data 
 changes into floating point. 
 Now, the calculations are done more precisely and accurately.

 */

