#include <stdio.h>

int main(){
    int i = 0, n, sum = 0;
    while(i < 5){ //0부터 4까지 : 5회 반복
        do{
            scanf("%d", &n); //일단 입력 받고
        }while(n < 1); //입력값 1 미만이면 다시 돌리기

        sum+=n;
        i++;
    }
    printf("%d", sum);
    return 0;
}