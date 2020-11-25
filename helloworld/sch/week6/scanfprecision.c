#include <stdio.h>

int main(){
    int i; float f;
    while (1){
        printf("Inpur interger i and float f:");
        scanf("%d %f", &i, &f);
        printf("i is %06d\n", i);
        printf("f is %.3f\n", f);
    }
    return 0;
}