#include <stdio.h>

int main(){
    int t, n, i, j;
    int rn[10001];
    scanf("%d", &t);
    int a[t+1], b[t+1];
    for (i = 2; i <= 10000; i++) rn[i] = 1;
    for (i = 2; i <= 10000; i++) if (rn[i] == 1) for (j = 2; i * j <= 10000; j++) rn[i * j] = 0;
    
    for (i = 0; i < t; i++){
        scanf("%d", &n);
        for (j = n / 2;; j++){
            if (rn[j] == 1 && rn[n-j] == 1){
                a[i] = n - j;
                b[i] = j;
                break;
            }
        }
    }
    for (i = 0; i < t; i++) printf("%d %d\n", a[i], b[i]);
    return 0;
}