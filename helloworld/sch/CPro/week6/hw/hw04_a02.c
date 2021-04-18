#include <stdio.h>

int main(){
    int cr;
    while (1){
        printf("Input color value:");
        scanf("%d", &cr);
        
        if (cr < 0 || cr > 100)
            printf("Wrong value!\n");
        else if (cr < 26)
            printf("Black!\n");
        else if (cr < 51)
            printf("Dark gray!\n");
        else if (cr < 76)
            printf("Light gray!\n");
        else
            printf("White!\n");
    }

    return 0;
}