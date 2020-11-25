#include <stdio.h>

int main(){
    int a, i, j, k, l, mod = 0, ans = 0, alpha[26] = {0, };
    char str[101] = {0, };
    scanf("%d", &a);
    for (i = 0; i < a; i++){
        scanf("%s", str);
        for (j = 0; j < 26; j++){
            for (k = 0; str[k] != '\0'; k++){
                if ((int)str[k] == j + 97){
                    if (alpha[j] == 1){
                        mod = 1;
                        break;
                    }
                    for (l = k; str[l] == j + 97; k++, l++)
                    alpha[j] = 1;
                }
            }
            if (mod == 1) break;
            else if (j == 25) ans+=1;
        }
    }
    printf("%d", ans);
    return 0;
}