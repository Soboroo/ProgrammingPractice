#include <stdio.h>

int main(){
    int n;
    printf("second: ");
    scanf("%d", &n);
    printf("[h: %d, m: %d, s: %d]", n / 3600, n % 3600 / 60, n % 60);
    return 0;
}