#include <stdio.h>

int main(){
    int a;
    printf("숫자를 입력하세요: ");
    scanf("%d", &a);
    for (int b = 3; b <= a * 3; b += 3){
        printf("%d\n", b);
    }
    return 0;
}