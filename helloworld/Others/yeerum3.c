#include <stdio.h>

int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d", &a);
    for (int i = 1; i < a + 1; i++){
        printf("%d ", i * 3);
    }
    return 0;
}