/*
CH-230-A
a6_p4.c
Shishir Sunar
ssunar@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE /*Comment this line to hide the intermediate values*/
int main(){
    int n;
    int *arr1, *arr2, sp = 0;
    scanf("%d",&n);
    //allocating the memory
    arr1 = (int*) malloc(sizeof(int)*n);
    arr2 = (int*) malloc(sizeof(int)*n);
    if (arr1==NULL || arr2==NULL){
        printf("Memory not allocated");
        return 0;
        //return if error in allocating memory
    }
    //inputs and loops
    for (int i = 0 ;i!=n; i++){
        scanf("%d",&arr1[i]);
        //first vector
    }
    for (int i = 0 ;i!=n; i++){
        scanf("%d",&arr2[i]);
        //second vector
    }
    //if INTERMEDIATE is defined
    #ifdef INTERMEDIATE
        printf("The intermediate product values are:\n");
        for(int i = 0; i!=n;i++){
            printf("%d\n",arr1[i]*arr2[i]);
        }
    #endif
    for(int i = 0; i!=n;i++){
        sp+=arr1[i]*arr2[i];
        //computing the scalar product
    }
    printf("The scalar product is: %d\n", sp);
    return 0; //end
}