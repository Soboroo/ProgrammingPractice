#include <stdio.h>

int main(){
    int a, n1, n2, sum = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        scanf("%d %d", &n1, &n2);
        sum += n1 * n2;
    }
    printf("%d", sum);
    return 0;
}