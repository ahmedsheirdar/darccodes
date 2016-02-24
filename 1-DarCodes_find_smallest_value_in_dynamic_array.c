#include<stdio.h>
#include<stdlib.h>

int main(){

    int *array, i, enter_array_size,smallest;

    printf("Enter array:\n");
    scanf("%d",&enter_array_size);

    array=(int*)malloc(enter_array_size*sizeof(int));

    printf("Enter Array Indexes:");

    for(i=0;i<enter_array_size;i++){
            printf("Enter integer:");
            scanf("%d",&array[i]);
           }

    smallest = array[0];
    for(i=0;i<enter_array_size;i++){
            if( array[i] < smallest){
                smallest = array[i];
            }
    }

    printf("Smallest Integer:%d",smallest);
    free(array);
    getch();
return 0;
}
