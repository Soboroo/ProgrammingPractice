#include <stdio.h>

int sum(int);

int main(){
    int n, result;

    printf("마지막 숫자를 입력하세요 : ");
    scanf("%d", &n);

    result = sum(n);
    printf("%d까지의 합 : %d\n", n, result);
    return 0;
}

int sum(int n){
    if (n <= 1) return 1;
    else return n+sum(n-1);
}