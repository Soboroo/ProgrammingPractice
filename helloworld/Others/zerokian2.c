#include <stdio.h>

int main(){
    int a, b;
    printf("월과 일을 띄어쓰기로 구분해 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("%d월 %d일은 ", a, b);
    if (a < 13 && a > 0 && b < 32 && b > 0){
        if (a < 7)
            printf("상반기입니다.");
        else
            printf("하반기입니다.");
    }
    else printf("잘못되었습니다.");
    return 0;
}