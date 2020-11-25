#include <stdio.h>

int main(){
    int iArr[3] = {0, 1, 2};
    double dArr[3] = {0.1, 1.1, 2.1};
    char cArr[100];

    for (int i = 0; i <3; i++)
        printf("%p\n", &iArr[i]);

    for (int i = 0; i < 3; i++)
        printf("%p\n", &dArr[i]);

    for (int i = 0; i < 100; i++)
        printf("%p\n", &cArr[i]);

    return 0;
}