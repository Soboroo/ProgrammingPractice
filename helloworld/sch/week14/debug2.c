#include <stdio.h>

int main(){
    char src[20] = "Hello, World!";
    char tar[20];
    char *p = src, *q = tar;

    while ((*q = *p) != '\0'){
        p++;
        q++;
    }

    return 0;
}