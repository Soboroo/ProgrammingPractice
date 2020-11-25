#include <stdio.h>

int main(){
    int n, i = 0;
    scanf("%d", &n);
    do{
        n /= 10;
        i++;
    }while(n != 0);
    printf("그 수는 %d자리입니다.", i);
    return 0;
}