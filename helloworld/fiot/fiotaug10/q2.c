#include <stdio.h>

int main(){
    int num[3];
    for (int i = 0; i < 3; i++) scanf("%d", &num[i]);
    printf("%d * %d + %d = %d", num[0], num[1], num[2], num[0] * num[1] + num[2]);
    return 0;
}