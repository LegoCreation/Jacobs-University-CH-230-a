/*
CH-230-A
a5_p9.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//function for reading the values
void input_for_matrix( int x, int y, int z, int ***arr){
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < z; k++){
                scanf("%d", &arr[i][j][k]);
                //for row col and width;
            }
        }
    }
}
//function to print the matrix.
void output_matrix(int x, int y, int z, int ***arr){
    for (int k = 0; k < z; k++){
        printf("Section %d:\n", k + 1);
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                printf("%d ", arr[i][j][k]);
                //prints the 3d matrix
            }
            printf("\n");
        }
    }
}


int main(){
    int x, y, z, ***arr;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    //allocating memory for the 3d-array
    arr = (int ***)malloc(sizeof(int) * x);
    if (arr == NULL){
        printf("No memory allocated");
        return 0;
        //invalid allocations
    }
    for (int i = 0; i < x; i++){
        arr[i] = (int **)malloc(sizeof(int) * y);
        if (arr == NULL){
            printf("Memory not allocated");
            return 0;
            //invalid allocation
        }
        for (int j = 0; j < y; j++){
            arr[i][j] = (int *)malloc(sizeof(int) * z);
            if (arr == NULL){
                printf("Memory not allocated");
                return 0;
                //invalid allocation
            }
        }
    } 
    //calling the functions
    input_for_matrix(x, y, z, arr);
    output_matrix(x, y, z, arr);
    free(arr); //deallocation
    return 0;
}