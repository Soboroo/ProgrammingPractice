#include <stdio.h>

int main(){
    char array[50], max = 0;
    scanf("%s", array);
    for (int i = 0; array[i]; i++)
        if (array[i] > max) max = array[i];
    printf("%c", max);
    return 0;
}