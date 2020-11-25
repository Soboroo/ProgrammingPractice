#include <stdio.h>

int main(){
    int i, x, y, w, h, min = 100000;
    int num[5];
    scanf("%d %d %d %d", &num[0], &num[1], &w, &h);
    num[2] = h - num[1];
    num[3] = w - num[0];
    for (i = 0; i < 4; i++) if (num[i] < min) min = num[i];
    printf("%d", min);
}