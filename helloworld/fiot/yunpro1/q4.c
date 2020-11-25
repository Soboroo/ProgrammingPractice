#include <stdio.h>

void comb(int money){
    for (int i = money / 700; i >= 0; i--){
        for (int j = (money - (i * 700)) / 500; j >= 0; j--){
            for (int k = (money - (i * 700 + j * 500)) / 400; k >= 0; k--){
                if (i * 700 + j * 500 + k * 400 == money)
                    printf("gang: %d cream: %d cola: %d\n", i + 1, j + 1, k + 1);
            }
        }
    }
}

int main(){
    int money;
    printf("Money: ");
    scanf("%d", &money);
    comb(money - 1600);
    return 0;
}