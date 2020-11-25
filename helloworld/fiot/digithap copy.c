#include <stdio.h>
#include <math.h>

int main(){
    int i, a, b;
    scanf("%d\n%d", &a, &b);
    for (i = 1; i <= 3; i++) printf("%d\n", a * ((b/(int)pow(10, i-1)) % 10));
    printf("%d", a*b);
    return 0;
}