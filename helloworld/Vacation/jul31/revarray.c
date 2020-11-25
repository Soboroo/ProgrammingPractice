#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{ type t = x; x = y; y = t;} while(0)

int main(){
    int n;
    int *p;
    scanf("%d", &n);
    p = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &p[i]);
    for (int i = 0; i < n / 2; i++)
        swap(int, p[i], p[n-i-1]);
    for (int i = 0; i < n; i++)
        printf("%d\n", p[i]);
    free(p);
    return 0;
}