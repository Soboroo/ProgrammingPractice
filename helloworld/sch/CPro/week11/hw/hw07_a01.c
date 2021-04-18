#include <stdio.h>

int main(){
    char arr[] = "Hello, World!";
    char str[100];
    int len, i;
    char *p;

    len = sizeof(arr);
    p = arr + len - 2;

    while (p >= arr) str[i++] = *p--;
    str[i] = '\0';

    printf("%s\n", arr);
    printf("%s", str);

    return 0;
}