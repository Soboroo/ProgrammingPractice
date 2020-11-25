#include <stdio.h>

int main(){
    int i = 9, n;
    scanf("%d", &n);
    while(i > 0){ //9부터 1까지 : 9회 반복
        printf("%d\n", n * i); //n의 i배 : n의 9배, 8배 ... 1배
        i--;
    }
    return 0;
}