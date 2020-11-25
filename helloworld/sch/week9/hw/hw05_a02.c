#include <stdio.h>

int main(){
    char str[100] = "Yesterday \"All\" My \'Troubles\' Seemed So Far Away.";
    int nArr[3] = {0, }, i = 0;

    while (str[i]){
        if (str[i] >= 'A' && str[i] <= 'Z') nArr[0]++;
        else if (str[i] >= 'a' && str[i] <= 'z') nArr[1]++;
        else nArr[2]++;
        i++;
    }

    for (i = 0; i < 3; i++)
        printf("%d, ", nArr[i]);

    return 0;
}