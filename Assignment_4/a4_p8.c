/*
CH-230-A
a4_p8.c
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
    //Declarations
    int mirr_arr[30][30];
    int xcol = 0; //starting column value
    //Loops and Printings
    //Following code horizontally reflects the matrix
    //so we can get the secondary diagonal as the leading
    //diagonal of the new matrix
    /*
                =>
        1 2 3   |   3 2 1
        4 5 6   |   6 5 4
        7 8 9   |   9 8 7
    */
    for (int row = 0; row<n; row++){ //loop until row
        for (int col = (n-1); col>=0; col--){ 
            //loop until column but from the last to
            //first value because we are vertically
            //reflecting the matrix
            mirr_arr[row][col] = arr[row][xcol];
            xcol++;
        }
        xcol=0;
    }
    printf("Under the secondary diagonal:\n"); 
    for (int row = 0; row<n; row++){ //loop until row
        for (int col = (n-1); col>=0; col--){ //loop until column
            if (row>col){ 
            //in every lower diagonal value, the row position
            //is greater than column position
                printf("%d ", mirr_arr[row][col]); //prints the array value
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