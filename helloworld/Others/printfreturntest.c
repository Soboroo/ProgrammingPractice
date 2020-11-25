#include <stdio.h>

int main(){
    char cArray[100];
    printf("Input \"Hello, World!\": ");
    gets(cArray);
    printf("%s", cArray);
    return 0;
}