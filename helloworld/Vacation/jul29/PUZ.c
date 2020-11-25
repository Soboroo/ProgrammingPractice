#include <stdio.h>
#include <math.h>

int main(){
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    printf("%d", (int)(ceil(((double)n - b) / (a -b))));
    return 0;
}

