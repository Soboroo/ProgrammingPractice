#include <stdio.h>

int main(){
    char str1[100], str2[100];
    int i;

    printf("Input \"Hello, World\": ");
    scanf("%s", str1);
    printf("%s\n", str1);
    i = 0;
    while (str1[i])
        printf("%c", str1[i++]);
    printf("\n");

    gets(str2);
    printf("%s\n", str2);
    i = 0;
    while (str2[i])
        printf("%c", str2[i++]);
    printf("\n");

    return 0;
}