/*
CH-230-A
a3_p5.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
int main(){
    //Declarations
    int n;
    double value_c[100], sum;
    char c;
    //Inputs
    printf("Enter a character ");
    scanf("%c", &c);
    printf("Enter an integer ");
    scanf("%d", &n);
    //loop for reading n double variables
    for (int i=0; i < n; i++ ){
        printf("Enter a value in Celsius ");
        scanf("%lf", &value_c[i]);
    }
    //Computations
    for (int i = 0; i<n; i++){ //for summing the values of array
        sum += value_c[i]; //summing the value in itself on every loop
    }
    switch ((int) c) { //Comparisions through ascii value
        case 115: //ascii value for character s
            //printing the sum
            printf("Sum of all entered temperature in Celsius is %lf\n", sum) ;
            break;
        case 112://ascii value for character p
            printf("List of the temperature you entered\n");
            //loop for printing the values
            for (int i = 0; i<n; i++){
                printf("%lf\n", value_c[i]);
            }
            break;
        case 116://ascii value for character t
            printf("List of the temperature you entered, in Fahrenheit\n");
            //loop for printing the values
            for (int i = 0; i<n; i++){
                printf("%lf\n", ((9.0/5.0)*value_c[i])+32);
            }
            break;
        default: //condition for other inputed values
            //taking the average of all entered tempratures and printing it
            printf("Average of temperature you entered: %lf\n", (sum/(double) n));
            break;
    }
    return 0;
}