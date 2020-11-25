#include <stdio.h>

int main(){
    int i = 1, n;
    scanf("%d", &n);
    while(i <= n){ //1부터 n까지 : n회 반복
        printf("%d\n", 3 * i); //3의 i배 : 1배, 2배 ... n배
        i++;
    }
}