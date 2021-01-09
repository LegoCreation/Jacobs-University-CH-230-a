/*
CH-230-A
a7_p5.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int num_compare_a(const void *va, const void * vb) {
    const int* a = (const int*) va; //as the varible is integer type
    const int* b = (const int*) vb;
    if (*a < *b) return -1; //-1 if first < second
    else if (*a > *b) return 1; //1 if first > second
    else return 0; //if both are equal
}
int num_compare_d(const void *va, const void * vb) {
    return num_compare_a(va, vb)*-1; //reversing the comparsion
}
void ascending(int* arr, int n){
    int(*fptr)(const void*,const void*); //creating new function pointer
    fptr = &num_compare_a;
    qsort(arr,n,sizeof(int),fptr); //sorting in ascending order
    for (int i = 0; i<n; i++){
        printf("%d ", *(arr+i)); //printing the values
    }
    printf("\n"); //new line
}
void descending(int* arr, int n){
    int(*fptr)(const void*,const void*); //creating new function pointer
    fptr = &num_compare_d;
    qsort(arr,n,sizeof(int),fptr); //sorting in descending order
    for (int i = 0; i<n; i++){
        printf("%d ", *(arr+i)); //printing the values
    }
    printf("\n"); //new line
}
int main(){
    int n;
    char c;
    int* arr;
    void(*fptr)(int*,int); //new function pointer
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    if (arr == NULL){ //if invalid memory allocation
        printf("Memory not allocated\n");
        exit(1); //exit if memory not allocated
    }
    //loop for the integer inputs
    for(int i = 0; i<n; i++){
        scanf("%d", arr+i);
    }
    getchar();
    scanf("%c", &c); //gets the character value
    getchar();
    while(1){
        if (c=='a') fptr = &ascending;
            //switches the function pointer to ascending
        if (c=='d') fptr = &descending;
            //switches the function pointer to descending
        if (c=='e') { //exit if e is pressed
            free(arr); //deallocating the memory
            break; //end the loop
        }
        fptr(arr,n); //calling the function pointer
        scanf("%c",&c); //asks for input again
        getchar();
    }
    return 0;
}