/*
CH-230-A
a4_p7.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
//function to print matrix
void print_matrix(int arr[30][30], int n){ 
    printf("The entered matrix is:\n");
    for (int row = 0; row<n; row++){ //loop until row
        for (int col = 0; col<n; col++){ //loop until column
            printf("%d ", arr[row][col]); //prints the value
        }
        printf("\n"); //enters to the next line 
    }
    return;
}
//function to print the lower diagonal
void print_lower_diagonal(int arr[30][30], int n){
    printf("Under the main diagonal:\n"); 
    for (int row = 0; row<n; row++){ //loop until row
        for (int col = 0; col<n; col++){ //loop until column
            if (row>col){ 
            //in every lower diagonal value, the row position
            //is greater than column position
                printf("%d ", arr[row][col]); //prints the array value
            }
        }
    }
    printf("\n"); // to print the new line
    return;
}
int main() {
    //Declarations
    int arr[30][30];
    int n;
    //Inputs
    scanf("%d", &n);
    for (int row = 0; row<n; row++){ //loop until row
        for (int col = 0; col<n; col++){ //loop until column
            scanf("%d", &arr[row][col]); //stores the value in array
        }
    }
    print_matrix(arr,n); //calls the matrix print function
    print_lower_diagonal(arr,n); //calls the lower diagonal function
    return 0;
}