#include <stdio.h>

int main(){
    int hap, i, j, k, a, b, max = 0;
    scanf("%d %d", &a, &b);
    int card[a+1];
    for (i = 0; i < a; i++) scanf("%d", &card[i]);
    for (i = 0; i < a; i++){
        for (j = 0; j < a; j++){
            if (j == i) continue;
            else {
                for (k = 0; k < a; k++){
                    if (k == i || k == j) continue;
                    else {
                        hap = card[i] + card[j] + card[k];
                        if (hap > max && hap <= b) max = hap;
                    }
                }
            }
        }
    }
    printf("%d", max);
    return 0;
}