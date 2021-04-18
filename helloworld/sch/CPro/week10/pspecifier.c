#include <stdio.h>

void func(int, int);

int main(){
    int a = 1, b = 2;

    printf("In main(), a is %d, and &a is %p\n", a, &a);
    printf("In main(), b is %d, and &b is %p\n", b, &b);
    func(a, b);

    return 0;
}

void func(int a, int b){
    printf("In func(), a is %d, and &a is %p\n", a, &a);
    printf("In func(), b is %d, and &b is %p\n", b, &b);
}