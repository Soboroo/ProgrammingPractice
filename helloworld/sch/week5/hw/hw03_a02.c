#include <stdio.h>

void printm(int, int);

int main(){
    int row = 50, column = 50;
    
    printm(row, column);

    return 0;
}

void printm(int r, int c){
    int i;
    for (i = 0; i < r * c; i++){
        if ((i / r + i % r) % 2) printf("O");
        else printf("X");
        if (i % r == r - 1) printf("\n");
    }
}