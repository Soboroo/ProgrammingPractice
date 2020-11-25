#include <stdio.h>

int main(){
    int i, j, n, m;
    printf("직사각형을 출력합니다.\n높이 : ");
    scanf("%d", &n);
    printf("너비 : ");
    scanf("%d", &m);
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}