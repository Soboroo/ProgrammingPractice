#include <stdio.h>

int main(){
    int a, b;
    printf("월과 일을 띄어쓰기로 구분해 입력하세요: ");
    scanf("%d %d", &a, &b);
    if (a < 13 && a > 0 && b < 32 && b > 0) printf("%d월 %d일은 %s반기 입니다.", a, b, a < 7 ? "상" : "하");
    else printf("%d월 %d일은 잘못되었습니다.", a, b);
    return 0;
}