#include <stdio.h>

int main(){
    int arrlen;
    char array[50], temp;

    scanf("%s", array);

    for (arrlen = 0; array[arrlen]; arrlen++);

    for (int i = 0; i < arrlen / 2; i++){
        int j = arrlen - i - 1;

        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    printf("%s", array);
    return 0;
}