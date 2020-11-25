#include <stdio.h>

int pow2(int a, int n){
    static int i = 1;
    i *= 2;
    if (n == a) return i;
    else pow2(a, ++n);
}

int main(){
    int num;
    printf("Number: ");
    scanf("%d", &num);
    printf("%d", pow2(num, 1));
    return 0;
}