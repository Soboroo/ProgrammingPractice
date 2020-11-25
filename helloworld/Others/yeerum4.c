#include <stdio.h>

int main(){
    int a;
    printf("n: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++){
        printf("%02d ", i * 3);
        if(!(i%10)) printf("\n");
    }
    return 0;
}