#include <stdio.h> // 1427
#include <stdlib.h>

int main(){
    int a, i, j, k, temp, max = 0;
    char digit[11] = {0, };
    scanf("%d", &a);
    sprintf(digit, "%d", a);
    for (i = 0; digit[i] != '\0'; i++){
        for (j = i; digit[j] != '\0'; j++){
            if (max < digit[j]){
                k = j;
                max = digit[j];
            }
        }
        temp = digit[i];
        digit[i] = digit[k];
        digit[k] = temp;
        max = 0;
    }
    printf("%d", atoi(digit));
    return 0;
}
