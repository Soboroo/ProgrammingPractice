#include <stdio.h>

int add(int, int);

int main(){
    int sum = add(1, 2);

    printf("%d", sum);

    return 0;
}

int add(int a, int b){
    int sum;
    sum = a + b;

    return sum;
}