#include <stdio.h>

int main(){
    char str[100] = "Hello, World!";
    printf("%p\n", str);
    printf((char *)0x000000000061FDA0); printf("\n");
    printf("%s\n", str);
    printf(str);
    return 0;
}