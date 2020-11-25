#include <stdio.h>

void swap(int *, int *);

int main(){
    int x, y;
    x = 1, y = 2;

    swap(&x, &y);

    printf("%d %d", x, y);

    return 0;
}

void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}