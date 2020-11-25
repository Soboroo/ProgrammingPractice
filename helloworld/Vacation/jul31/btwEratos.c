#include <stdio.h>

int main(){
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    int rn[b+1];
    rn[1] = 0;
    for (i = 2; i <= b; i++) rn[i] = 1;
    for (i = 2; i <= b; i++) if (rn[i] == 1) for (j = 2; i * j <= b; j++) rn[i * j] = 0;
    for (i = a; i <= b; i++) if (rn[i] == 1) printf("%d\n", i);
    return 0;
}