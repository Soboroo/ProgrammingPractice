#include <stdio.h>

int main(){
    char str[100] = "yesterday all my troubles seemed so far away.";
    int nArr[5] = {0, }, i = 0;

    while (str[i]){
        switch(str[i]){
            case 'a': nArr[0]++; break;
            case 'e': nArr[1]++; break;
            case 'i': nArr[2]++; break;
            case 'o': nArr[3]++; break;
            case 'u': nArr[4]++; break;
            default:;
        }
        i++;
    }

    for (i = 0; i < 5; i++)
        printf("%d, ", nArr[i]);

    return 0;
}