#include <stdio.h>

int main(){
    int a, b, i, j, sum = 0, min;
    scanf("%d\n%d", &a, &b);
    int rn[b+1];
    rn[1] = 0;
    for (i = 2; i <= b; i++) rn[i] = 1;
    for (i = 2; i <= b; i++) if (rn[i] == 1) for (j = 2; i * j <= b; j++) rn[i * j] = 0;
    for (i = a; i <= b; i++){
        if (rn[i] == 1){
            if (sum == 0) min = i;
            sum+=i;
        }
    }
    if (sum == 0) printf("-1");
    else printf("%d\n%d", sum, min);
    return 0;
}