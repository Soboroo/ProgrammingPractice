#include <stdio.h>

int main(){
    int n, temp, change = 0;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++) scanf("%d", &num[i]);
    for (int i = 1; i <=n-1; i++){
        change = 0;
        for (int j = 1; j <=n-1; j++){
            if (num[j > num[j+1]]){
                change = 1;
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
        if (change == 0){
            printf("%d\n", i);
            break;
        }
    }
}