#include <stdio.h>

void fibo(int num){
    int fibo[BUFSIZ] = {0, 1, };
    for (int i = 2; i < num; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    for (int i = 0; i < num-1; i++) printf("%d, ", fibo[i]);
    printf("%d", fibo[num-1]);
}

int main(){
    int num;
    scanf("%d", &num);
    fibo(num);
    return 0;
}