#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);

int main(int argc, char** argv){
    int n1, n2;
    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);

    printf("%d", add(n1, n2));
    return 0;
}

int add(int a, int b){
    return a + b;
}