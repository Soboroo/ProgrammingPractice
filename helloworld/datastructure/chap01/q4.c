#include <stdio.h>
#include <stdlib.h>

int static compare (const void *first, const void *second){
    if (*(int*)first > *(int*)second) return 1;
    else if (*(int*)first < *(int*)second) return -1;
    else return 0;
}

int main(){
    int num[3];
    for (int i = 0; i < 3; i++) scanf("%d", &num[i]);
    qsort(num, 3, sizeof(int), compare);
    printf("%d", num[1]);
}