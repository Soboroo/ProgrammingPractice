#include <stdio.h>
#include <math.h>

int main(){
    long long i, n, t, a = 0, b = 0, g;
    scanf("%d", &t);
    int ans[t+1];
    for (i = 0; i < t; i++){
        scanf("%d %d", &a, &b);
        g = b - a;
        n = (int)(ceil(((1 + sqrt(1 + (4 * g))) / 2) - 1));
        if (g <= n * (n-1) + n) ans[i] = n * 2 - 1;
        else ans[i] = n * 2;
    }
    for (i = 0; i < t; i++) printf("%d\n", ans[i]);
    return 0;
}