#include <stdio.h>

void MaxAndMin(int **, int **, int *, int);

int main(){
    int *maxPtr;
    int *minPtr;
    int arr[5];

    for (int i = 0; i < 5; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    MaxAndMin(&maxPtr, &minPtr, arr, sizeof(arr)/sizeof(arr[0]));
    
    int maxindex = maxPtr - arr, minindex = minPtr - arr;

    printf("max: arr[%d], min: arr[%d]\n", maxindex, minindex);
    printf("Result of *maxPtr: %d\nResult of *minPtr: %d\n", *maxPtr, *minPtr);
    printf("Address of maxPtr: %p\nAddress of arr[%d]: %p\n", maxPtr, maxindex, &arr[maxindex]);
    printf("Address of minPtr: %p\nAddress of arr[%d]: %p\n", minPtr, minindex, &arr[minindex]);
    return 0;
}

void MaxAndMin(int **maxptr, int **minptr, int *arr, int len){
    *maxptr = *minptr = arr;
    for (int i = 0; i < len; i++){
        if(arr[i] > **maxptr) *maxptr = &arr[i];
        if(arr[i] < **minptr) *minptr = &arr[i];
    }
}