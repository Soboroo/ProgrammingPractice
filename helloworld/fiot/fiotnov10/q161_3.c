#include <stdio.h>

int main(){
    int score[5][5] = {0, };

    for (int i = 0; i < 4; i++){
        printf("Score of User%d: ", i);
        for (int j = 0; j < 4; j++){
            scanf("%d", &score[i][j]);
            score[i][4] += score[i][j];
            score[4][j] += score[i][j];
            score[4][4] += score[i][j];
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
            printf("%2d ", score[i][j]);
        printf("\n");
    }

    return 0;
}