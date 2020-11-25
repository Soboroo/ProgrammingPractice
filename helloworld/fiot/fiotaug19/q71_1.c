#include <stdio.h>

int main(){
    int i = 0, n;
    scanf("%d", &n);
    while(i < n){ //0부터 n-1까지 : n회 반복
        printf("Hello world\n");
        i++;
    }
    return 0;
}