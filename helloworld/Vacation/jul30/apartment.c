#include <stdio.h>

int main(){
    int i, j, t, k, n;
    scanf("%d", &t);
    int num[16][15] = {}, ans[t+1];
    for (i = 0; i < 15; i++) num[0][i] = i + 1;
    for (i = 1; i < 15; i++){
        for (j = 0; j < 14; j++){
            for (k = 0; k <= j; k++) num[i][j] += num[i-1][k];
        }
    }
    for (i = 0; i < t; i++){
        scanf("%d\n%d", &k, &n);
        ans[i] = num[k][n-1]; 
    }
    for (i = 0; i < t; i++){
        printf("%d\n", ans[i]);
    }
    return 0;
}