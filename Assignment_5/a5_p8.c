/*
CH-230-A
a5_p8.c
Shishir Sunar
ssunar@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
//function to display arrays.
void disp_mat(int **list, int x, int y){
    int i, counter;
    for (i = 0; i < x; i++){ //rows
        for (counter = 0; counter < y; counter++){ //columns
            printf("%d ", list[i][counter]); //prints
        }
        printf("\n"); //new line
    }
    return;
}
//function for matrix multiplication
void mat_mul(int **list, int **list2, int x, int y, int z){
    int **a3;
    int sum = 0;
    a3 = (int **)malloc(sizeof(int) * x);
    for (int i = 0; i < x; i++){
        //allcocating memory
        a3[i] = (int *)malloc(sizeof(int) * z);
    }
    if (a3 == NULL){
        printf("Memory not allocated");
        return;
    }
    for (int i = 0; i < x; i++){
        for (int j = 0; j < z; j++){
            for (int k = 0; k < y; k++){
                sum = sum + (list[i][k] * list2[k][j]);
            }
            a3[i][j] = sum;
            //value for ijth element
            sum = 0;//reset sum for next element
        }
    }
    printf("The multiplication result A*B:\n");
    //calling the display function
    disp_mat(a3, x, z);
    //deallocation
    free(a3);
    return;
}
//function for reading input
void matrix_formation(int m, int n, int p){
    int **arr, **a2, counter;

    arr = (int **)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++){
        //dynamically allocating memory
        arr[i] = (int *)malloc(sizeof(int) * n);
        if (arr[i] == NULL){
        printf("Memory not allocated");
        return;
    }
    }
    if (arr == NULL){
        printf("Memory not allocated");
        return;
    }
    a2 = (int **)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++){
        //dynamically allocating memory.
        a2[i] = (int *)malloc(sizeof(int) * p);
        if (a2[i] == NULL){
        printf("Memory not allocated");
        return;
    }
    }
    if (a2 == NULL){
        printf("Memory not allocated");
        return;
    }

    for (int i = 0; i < m; i++){
        for (counter = 0; counter < n; counter++){
            scanf(" %d", &arr[i][counter]);
        }
    }
    for (int i = 0; i < n; i++){
        for (counter = 0; counter < p; counter++){
            scanf("%d", &a2[i][counter]);
        }
    }
    //printings
    printf("Matrix A:\n");
    disp_mat(arr, m, n);
    printf("Matrix B:\n");
    disp_mat(a2, n, p);
    mat_mul(arr, a2, m, n, p);
    //deallocating memories
    free(arr);
    free(a2);
}

int main(){
    int m, n, p;
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &p);
    //calling the function
    matrix_formation(m, n, p);
    return 0;
}
