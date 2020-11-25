#include <stdio.h>

int main(){
    int i, n, sum = 0;
    scanf("%d", &n);
    for(i = 1; i < n; i++) printf("%d + ", i);
    printf("%d = %d", n, n * (n + 1) / 2);
    return 0;
}