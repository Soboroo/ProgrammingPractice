#include <stdio.h>

int decide(int);

int main(){
    int color = 76;
    int res = decide(color);

    if (res)
        printf("White!\n");
    else
        printf("Black!\n");

    return 0;
}

int decide(int v){
    if (50 < v && v <= 100)
        return 0;
    else
        return 1;
}