#include <stdio.h>

int main(){
    int i, j, n, num, numcont[10002] = {0, };
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &num);
        numcont[num]++;
    }
    for (i = 1; i <= 10000; i++){
        for (j = 0; j < numcont[i]; j++){
            printf("%d\n", i);
        }
    }
    return 0;
}