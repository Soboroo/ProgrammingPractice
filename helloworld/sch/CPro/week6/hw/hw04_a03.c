#include <stdio.h>

void printo();
void printx();
void printn();

int main(){
    int row, column, x, y, i;
    while (1){
        printf("Input row, column, x, y:");
        scanf("%d %d %d %d", &row, &column, &x, &y);
        for (i = 0; i < row * column; i++){
            if (i/column == x-1 || i%column == y-1) printx();
            else printo();
            if (i%column == column-1) printn();
        }
    }
    return 0;
}

void printo(){
    printf("O");
}

void printx(){
    printf("X");
}

void printn(){
    printf("\n");
}