#include <stdio.h>

int max(int a, int b, int c){
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int min(int a, int b, int c){
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}


int main(){
    int num[3];
    for (int i = 0; i < 3; i++){
        printf("num %d: ", i+1);
        scanf("%d", &num[i]);
    }
    printf("max num is %d\n", max(num[0], num[1], num[2]));
    printf("min num is %d\n", min(num[0], num[1], num[2]));
    return 0;
}