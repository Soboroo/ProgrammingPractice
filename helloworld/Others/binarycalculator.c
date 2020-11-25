#include <stdio.h>

int main(){
    int num;
        while(1){
            scanf("%d", &num);
            if(num == 0) return 0;
            printf("2|%d\n +---\n", num);
            while(num != 1){
                printf("%s%-4d --- %d\n%s", num / 2 == 1 ? "  " : "2|", num / 2, num % 2, num / 2 == 1 ? "":" +---\n");
                num/=2;
            }
        }
    return 0;
}