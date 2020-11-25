#include <stdio.h>

int main(){
    int x, y;
    int m, n;

    x = 42;
    y = ++x;
    printf("%d, %d\n", x, y);

    m = 42;
    n = m++;
    printf("%d, %d\n", m, n);
    
    return 0;
}