#include <stdio.h>

int main(){
    int n, a, b, i, j;
    scanf("%d", &n);
    int w[n+1], h[n+1], ans[n+1];
    for (i = 0; i < n; i++) scanf("%d %d", &w[i], &h[i]);
    for (i = 0; i < n; i++){
        ans[i] = 0;
        for (j = 0; j < n; j++){
            if (i == j) continue;
            else if (w[i] < w[j] && h[i] < h[j]) ans[i]+=1;
        }
    }
    for (i = 0; i < n; i++) printf("%d ", ans[i] + 1);
    return 0;
}