#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a < b ? b - a : a - b);
    return 0;
}