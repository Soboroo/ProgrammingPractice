#include <stdio.h>

int main(){
    char str[] = "Hello, World!";
    char cArr[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

    printf("%s\n", str);
    printf("%s\n", cArr);
    
    printf("%.10s\n", str);

    str[10] = '\0';
    printf("%s\n", str);

    return 0;
}