#include <stdio.h>
#include <stdlib.h>

int static compare(const void *first, const void *second){
    if (*(int*)first > *(int*)second) return 1;
    else if (*(int*)first < *(int*)second) return -1;
    else return 0;
}

int main(){
    int i, n;
    scanf("%d", &n);
    int num[n];
    for (i = 0; i < n; i++) scanf("%d", &num[i]);
    qsort(num, n, sizeof(int), compare);
    for (i = 0; i < n; i++) printf("%d\n", num[i]);
    return 0;
}