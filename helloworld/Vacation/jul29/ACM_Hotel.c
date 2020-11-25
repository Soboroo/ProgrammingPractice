#include <stdio.h>

int main(){
    int i, t, h, w, n;
    scanf("%d", &t);
    int ans[t+1];
    for (i = 0; i < t; i++){
        scanf("%d %d %d", &h, &w, &n);
        if (n % h == 0) ans[i] = (h * 100) + (n / h);
        else ans[i] = ((n % h) * 100) + (n / h) + 1;
    }
    for (i = 0; i < t; i++) printf("%d\n", ans[i]);
    return 0;
}