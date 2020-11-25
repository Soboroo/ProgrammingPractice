#include <stdio.h>

int main(){
    int i = 0, n, sum = 0;
    while(i < 5){ //0부터 4까지 : 5회 반복
        while(1){
            scanf("%d", &n);
            if (n >= 1) break; //입력값이 1 이상이면 반복문 탈출 -> 1미만이면 다시 입력
        }

        sum+=n;
        i++;
    }
    printf("%d", sum);
    return 0;
}