#include <stdio.h>

int main(){
    int i = 0, j;
    while(i < 5){ //0부터 4까지 : 5회 반복 -> 5줄 출력
        j = 0;
        while(j < i){ //i번째 줄에는 i번 "o"를 출력 : 0번째 줄 - 0번, 1번째 줄 - 1번 ...
            printf("o");
            j++;
        }
        printf("*\n");
        i++;
    }
    return 0;
}