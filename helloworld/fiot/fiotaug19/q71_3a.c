#include <stdio.h>

int main(){
    int sum = 0, n;
    do{
        scanf("%d", &n);
        sum+=n;
    }while(n != 0); //입력값이 0이 아닐때만 반복
    printf("%d", sum);
    return 0;
}