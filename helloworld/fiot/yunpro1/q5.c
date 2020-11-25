#include <stdio.h>

int main(){
    int n = 0, num[51] = {1, 1, 0, };
    for (int i = 2; i < 51; i++){
        if (!num[i]){
            for (int j = 2; i * j < 51; j++){
                num[i * j] = 1;
            }
        }
    }
    for (int i = 2; i < 51 && n < 10; i++){
        if (!num[i]) {
            printf("%d ", i);
            n++;
        }
    }
    return 0;
}