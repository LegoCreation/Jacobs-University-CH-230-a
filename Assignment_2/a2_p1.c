/*
CH-230-a
a2_p1.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
int main(){
    double first_double,second_double;
    int first_integer,second_integer;
    char first_char,second_char;
    int sum_of_integers, prod_of_integers;
    int sum_of_chars,prod_of_chars;
    scanf("%lf",&first_double);
    scanf("%lf",&second_double);
    scanf("%d", &first_integer);    
    scanf("%d", &second_integer);
    getchar();     //To ignore the value of Enter key
    scanf("%c", &first_char);
    getchar();     //To ignore the value of Enter key
    scanf("%c", &second_char);
    getchar();
    printf("sum of doubles=%lf\n",(first_double+second_double));
    printf("difference of doubles=%lf\n",(first_double-second_double));
    printf("square=%lf\n",(first_double*first_double));
    sum_of_integers = first_integer + second_integer;
    prod_of_integers= first_integer * second_integer;
    printf("sum of integers=%d\n",sum_of_integers);
    printf("product of integers=%d\n",prod_of_integers);
    printf("sum of chars=%d\n",(first_char+second_char));
    printf("product of chars=%d\n",(first_char*second_char));
    sum_of_chars=first_char+second_char;
    prod_of_chars=first_char*second_char;
    printf("sum of chars=%c\n",sum_of_chars);  
    printf("product of chars=%c\n",prod_of_chars); 
    return 0;
}
