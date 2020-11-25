#include <stdio.h>

int main(){
    int a, b, n, i;
    scanf("%d", &n);
    for (i = 1; n - i > 0; i++) n -= i;
    if (i % 2 == 0) for (a = 1, b = i; a < n; a+=1, b-=1){}
    else for (a = i, b = 1; b < n; i++, a-=1, b+=1){}
    printf("%d/%d", a, b);}