#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, k, num = 0;
    char digit[10];
    scanf("%d", &n);
    for (i = 666;; i++){
        sprintf(digit, "%d", i);
        for (j = 0; digit[j] != '\0'; j++){}
        for (k = 0; k < j - 2; k++){
            if (digit[k] == '6' && digit[k+1] == '6' && digit[k+2] == '6'){
                num+=1;
                break;
            }
        }
        if (num == n){
            printf("%d", i);
            return 0;
        }
        for (j = 0; j < 10; j++) digit[j] = '\0';
    }
}