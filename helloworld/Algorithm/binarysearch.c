#include <stdio.h>
#include <stdlib.h>

int static compare(const void *first, const void *second){
    if (*(int*)first > *(int*)second) return 1;
    else if (*(int*)first < *(int*)second) return -1;
    else return 0;
}

int bsearch(int arr[], int num, int size){
    int i = 0, j = size - 1;
    while (i <= j) {
        int mid = (i + j) / 2;
        if (arr[mid] == num) return mid;
        else if (arr[mid] < num) i = mid + 1;
        else j = mid - 1;
    }
}

int main(){
    int n, num;
    scanf("%d %d", &n, &num);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);
    printf("%d", bsearch(arr, num, n));
    return 0;
}