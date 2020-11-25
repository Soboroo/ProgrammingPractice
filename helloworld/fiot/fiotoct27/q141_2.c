#include <stdio.h>

void Swap3(int *a, int *b, int *c){
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main(){
    int num1, num2, num3;
    for (int i = 0; i < 3; i++){
        printf("num%d: ", i+1);
        switch(i){
            case 0: scanf("%d", &num1); break;
            case 1: scanf("%d", &num2); break;
            case 2: scanf("%d", &num3); break;
        }
    }

    printf("Before: %d, %d, %d\n", num1, num2, num3);
    Swap3(&num1, &num2, &num3);
    printf("After: %d, %d, %d", num1, num2, num3);

    return 0;
}