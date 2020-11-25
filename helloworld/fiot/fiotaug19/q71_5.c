#include <stdio.h>

int main(){
    int i = 0, n, a, sum = 0;
    scanf("%d", &n);
    while(i < n){ //0부터 n-1까지 : n회 반복
        scanf("%d", &a);
        sum+=a;
        i++;
    }
    printf("%f", (double)sum / n); //sum 자료형 double로 변횐 후 평균 계산
    return 0;
}