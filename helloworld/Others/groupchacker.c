#include <stdio.h>

int chacker(char *);

int main(){
    int n, result = 0;
    char string[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s", string);
        result += chacker(string);
    }
    printf("%d", result);
    return 0;
}

int chacker(char *str){
    int cbool[26] = {0, };
    for (int i = 0; str; i++){
        if (!(*(str+(i+1)))){
            if (cbool[*(str+i)]) return 0;
            if (*(str+i) != *(str+(i+1)))
                cbool[*(str+i)] = 1;
        }
    }
    return 1;
}