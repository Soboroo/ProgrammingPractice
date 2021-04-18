#include <stdio.h>

int main(){
    int i, n = 3;
    char cArray[3];

    printf("Input three characters:");
    for (i = 0; i < n; i++)
        scanf("%c", &cArray[i]);

    for (i = 0; i < n; i++)
        printf("%c", cArray[i]);

    return 0;
}