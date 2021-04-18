#include <stdio.h>
#define M 3

void printM1Da(int []);
void printM1Dp(int *);

int main(){
    int A[M] = {1, 2, 3};

    printM1Da(A);
    printf("\n");

    printM1Dp(A);
    printf("\n");

    //int len = sizeof(A) / sizeof(A[0]);

    return 0;
}

void printM1Da(int a[]){
    int i;
    for (i = 0; i < M; i++)
        printf("%d ", a[i]);
}

void printM1Dp(int *a){
    int i;
    for (i = 0; i < M; i++)
        printf("%d ", *(a+i));
}