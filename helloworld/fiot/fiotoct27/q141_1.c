#include <stdio.h>

int SquareByValue(int a){
    return a * a;
}

void SquareByReference(int *a){
    *a *= *a;
}

int main(){
    int n1, n2;
    printf("N: ");
    scanf("%d", &n1);
    n2 = n1;

    SquareByReference(&n2);
    printf("Result of SquareByValue: %d\n", SquareByValue(n1));
    printf("Result of SquareByReference: %d\n", n2);
}