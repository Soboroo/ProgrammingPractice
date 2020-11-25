#include <stdio.h>

int main(){
    int a, i, j;
    int ans[BUFSIZ] = {0, }, rn[246913];
    rn[1] = 0;
    for (i = 2; i <= 246912; i++) rn[i] = 1;
    for (i = 2; i <= 246912; i++) if (rn[i] == 1) for (j = 2; i * j <= 246912; j++) rn[i * j] = 0;
    for (i = 0;; i++){
        scanf("%d", &a);
        if (a == 0) break;
        else for (j = a+1; j <= a * 2; j++) if (rn[j] == 1) ans[i]+=1;
    }
    for (j = 0; j < i; j++) printf("%d\n", ans[j]);
    return 0;
}