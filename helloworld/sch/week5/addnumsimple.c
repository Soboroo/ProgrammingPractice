#include <stdio.h>

int add(int, int);

int main(){
    printf("%d", add(1, 2));
    return 0;
}

int add(int a, int b){
    return a + b;
}