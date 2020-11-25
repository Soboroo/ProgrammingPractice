#include <stdio.h>

int main(){
    int a, b, c, ans[BUFSIZ], i, j, max;
    for (i = 0;; i++){
        scanf("%d %d %d", &a, &b, &c);
        if (a == b && b == c && c == 0) break;
        max = a >= b && a >= c ? a : b >= a && b >= c ? b : c;
        if ((a*a) + (b*b) + (c*c) == max * max * 2) ans[i] = 1;
        else ans[i] = 0;
    }
    for (j = 0; j < i; j++) if (ans[j] == 1) printf("right\n"); else printf("wrong\n");
    return 0;
}