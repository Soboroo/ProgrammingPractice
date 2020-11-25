#include <stdio.h>

int main(){
    int n, i, j, ans = 0;
    scanf("%d", &n);
    int rn[1001];
    for (i = 2; i <= 1000; i++) rn[i] = 1;
    for (i = 2; i <= 1000; i++) if (rn[i] == 1) for (j = 2; i * j <= 1000; j++) rn[i * j] = 0;
    for (i = 0; i < n; i++){
        scanf("%d", &j);
        if (j != 1 && rn[j] == 1) ans+=1;
    }
    printf("%d", ans);
    return 0;
}