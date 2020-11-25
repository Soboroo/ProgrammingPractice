#include <stdio.h>

int main(){
    int a, i, j, temp;
    scanf("%d", &a);
    int num[a];
    for (i = 0; i < a; i++) scanf("%d", &num[i]);
    for (i = 0; i < a-1; i++){
        j = i;
        while (j != -1 && num[j] > num[j+1]){
            temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
            j--;
        }
    }
    for (i = 0; i < a; i++) printf("%d\n", num[i]);
    return 0;
}