#include <stdio.h>

int main(){
    char cArr[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    int i = 0;

    printf("%s\n", cArr);

    while (cArr[i])
        printf("%c", cArr[i++]);
    printf("\n");

    cArr[6] = '\0';
    printf("%s\n", cArr);

    printf("%s", &cArr[7]);
    return 0;
}