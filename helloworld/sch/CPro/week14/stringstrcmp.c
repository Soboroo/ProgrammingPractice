#include <stdio.h>
#include <string.h>

int main(){
    char s1[10] = "Hello";
    char s2[10] = "Hello";
    char s3[20] = "Hello, World!";

    if (s1 == s2) 
        printf("The result is equal!\n");
    else 
        printf("The result is NOT equal!\n");

    if (!strcmp(s1, s2))
        printf("The result is equal!\n");
    else
        printf("The result if NOT equal!\n");

    if (!strncmp(s1, s3, 5))
        printf("The result is equal!\n");
    else
        printf("The result if NOT equal!\n");

    return 0;
}