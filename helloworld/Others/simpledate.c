#include <stdio.h>

int main(){
    int sum = 0;
    int dbym[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 1; i < 13; i++)
        sum += dbym[i];

    printf("%d", sum);
    return 0;
}