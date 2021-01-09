/*
CH-230-A
a5_p5.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
//function for scalar product
double scalar_prod(double v[], double w[], int n){
    double sp;
    for(int i = 0; i<n; i++){
        sp += v[i]*w[i]; //taking out dot product
    }
    return sp; //returning the value
}
//function for the lowest
double lowest(double v[], int n){
    double low1 = v[0];    
    for(int i = 0; i<n; i++){
        low1 = (1-(v[i] <low1))*low1 + v[i] * (v[i] < low1);
        //The above line uses computationally efficient method to skip
        //the 'if' comparision. if v[i] is the smaller than the variable
        //'low1' then it will compute 0*low1+v[i]*1 => v[i], which is
        //same as appending the low1imum value using if statement. :)
    }
    return low1;
}
//function for the lowest position
int lowest_position(double v[], int n){
    double low1 = v[0];
    int lp1 = 0;
    for(int i = 0; i<n; i++){
        if (v[i]<low1){
            low1 = v[i]; //finding the lowest
            lp1 = i; //taking the position of the lowest
        }

    }
    return lp1;
}
//function for the highest
double highest(double v[], int n){
    double high1 = v[0];
    for(int i = 0; i<n; i++){
        high1 = (1-(v[i] > high1))*high1 + v[i] * (v[i] > high1);
        //same reasoning as the lowest function
    }
    return high1;
}
//function for the highest position
int highest_position(double v[], int n){
    double high1 = v[0];
    int hp1 = 0;
    for(int i = 0; i<n; i++){
        if (v[i]>high1){
            high1 = v[i];
            //finding the highest
            hp1 = i;
            //taking the position of the highest
        }

    }
    return hp1;
}

int main(){
    int n;
    double *v, *w; //creating two vectors
    scanf("%d",&n);
    //allocating the memory
    v = (double*)malloc(sizeof(double)*n);
    w = (double*)malloc(sizeof(double)*n);
    for(int i=0; i<n;i++){
        scanf("%lf",&v[i]);//taking inputs
    }
    for(int j=0; j<n;j++){
        scanf("%lf", &w[j]);//taking inputs
    }
    //printing and calling the functions
    printf("Scalar product=%lf\n",scalar_prod(v,w,n));
    printf("The smallest = %lf\n",lowest(v,n));
    printf("Position of smallest = %d\n",lowest_position(v,n));
    printf("The largest = %lf\n",highest(v,n));
    printf("Position of largest = %d\n",highest_position(v,n));
    printf("The smallest = %lf\n",lowest(w,n));
    printf("Position of smallest = %d\n",lowest_position(w,n));
    printf("The largest = %lf\n",highest(w,n));
    printf("Position of largest = %d\n",highest_position(w,n));
    free(v);//deallocating the memory
    free(w);//deallocating the memory
    return 0; 
}