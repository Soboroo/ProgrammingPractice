#include <stdio.h>

int main(){
    int i, j;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (i + j == 9){
                printf("A : %d    Z : %d\n", i, j);
                break;
            }
        }
    }
    return 0;
}