#include <stdio.h>
#define N 3

int main(){
    char *s[N] = {"IoT, ", "MLs, ", "SCH"};
    char str[100];
    int i, j, k;
    char *p;

    for (i = 0; i < N; i++)
        for(j = 0; *(*(s + i) + j); j++) *(str + k++) = *(*(s + i) + j);
    str[k] = '\0';

    printf(str);

    return 0;
}