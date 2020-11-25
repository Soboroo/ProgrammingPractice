#include <stdio.h>

int main(){
    int sum = 0, n;
    while(1){
        scanf("%d", &n);
        if (n == 0) break; //입력값이 0이면 while문 탈출
        else sum+=n; //아니면 sum을 n만큼 증가
    }
    printf("%d", sum);
    return 0;
}