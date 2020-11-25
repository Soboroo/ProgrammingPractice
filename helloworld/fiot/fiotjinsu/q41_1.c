#include <stdio.h>

int main(){
    int i, j, yeezin[8];
    for (i = 8; i <= 20; i++){
        for (j = 0; j < 8; j++){
            printf("%d ", i & (1<<(8 - j - 1)) ? 1 : 0);
        }
        printf("\n");
    }
    for (i = 8; i <= 20; i++) printf("%x\n", i);
    return 0;   
}