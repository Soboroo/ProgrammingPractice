#include <stdio.h>
#include <stdlib.h>

int static compare(const void *first, const void *second){
    if (*(int*)first > *(int*)second) return -1;
    else if (*(int*)first < *(int*)second) return 1;
    else return 0;
}

int main(){
    int arr[10] = {35, 74, 32, 87, 56, 34, 27, 36, 85, 95};
    int arrsiz = sizeof(arr) / sizeof(int);
    int i;

    for (i = 0; i < 10; i++) printf("%d ", arr[i]);
    printf("\n");

    qsort(arr, arrsiz, sizeof(int), compare);

    for (i = 0; i < 10; i++) printf("%d ", arr[i]);

    return 0;
}