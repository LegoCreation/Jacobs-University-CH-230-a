/*
CH-230-A
a7_p6.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
//defining the structure
typedef struct person {
    char name[30];
    int age;
} data;
//function for swapping
void swap(data *xp, data *yp) { 
    data temp = *xp; //storing the value of xp in temp
    *xp = *yp;
    *yp = temp; 
    //swap the values of two structures
} 
//function for string comparision
int str_cmp(void *va, void * vb) {
    data* a = (data*) va; //as the varible is integer type
    data* b = (data*) vb;
    if (strcmp(a->name,b->name)>0) return 1; //return 1 if greater
    else if (strcmp(a->name,b->name)<0) return -1; //return -1 if smaller
    else return 0; //return 0 if equal
}
//function for age comparision
int num_cmp(void *va, void * vb) {
    data* a = (data*) va; //as the varible is integer type
    data* b = (data*) vb;
    if (a->age < b->age) return -1; //-1 if first < second
    else if (a->age > b->age) return 1; //1 if first > second
    else return 0; //if both are equal
}
// bubble sort function
void bubbleSort(data* var , int n,
    int (*cmp_func)(void*, void*),
    int (*cmp_func2)(void*, void*)) {
    int i, j; 
    int flag; //initializing change flag for better optimization
    for (i = 0; i < n-1; i++) {
        flag = 0;
        for (j = 0; j < n-i-1; j++) {
            if (cmp_func((var+j), (var+j+1)) > 0 ) {
                //priority comparision
                swap(var+j, var+j+1);
                //if greater then swap
            }
            else if(cmp_func((var+j), (var+j+1)) == 0){ //if equal
                if (cmp_func2((var+j), (var+j+1)) > 0 ) {
                    //secondary comparision
                    swap(var+j, var+j+1);
                    //if greater then swap
                }
            }
            flag = 1; //set the flag to 1 to ensure that there is a change
        }
        // if the values are not changed in the inner loop then break
        if (flag == 0) break;
    }
}

int main(){
    int n;
    data* var; //new structure
    scanf("%d", &n);
    getchar();
    var = (data*)malloc(sizeof(data)*n);
    if (var == NULL){ //if invalid memory allocation
        printf("Memory not allocated\n");
        exit(1);
    }
    for (int i = 0; i<n; i++){ //loop for input
        fgets((var+i)->name, 30, stdin); 
        if (((var+i)->name)[strlen((var+i)->name)-1] == '\n'){
            //removing the enter key
            ((var+i)->name)[strlen((var+i)->name)-1] = '\0';
        }
        scanf("%d",&(var+i)->age);
        getchar();
    }
    bubbleSort(var,n,str_cmp, num_cmp); //passing the function pointer
    //calling the bubble sort with first priority order of name
    for (int i = 0; i<n; i++){
        //printing on the specified format
        printf("{%s, %d}; ",(var+i)->name, (var+i)->age);
    }
    printf("\n");
    bubbleSort(var,n,num_cmp, str_cmp); //passing the function pointer
    //calling the bubble sort with first priority order of age
    for (int i = 0; i<n; i++){
        //printing on the specified format
        printf("{%s, %d}; ",(var+i)->name, (var+i)->age);
    }
    printf("\n");
    free(var); //deallocating the memory
    return 0;
}