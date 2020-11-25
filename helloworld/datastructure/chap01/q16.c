#include <stdio.h>

void triangleLB (int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return;
}

void triangleLU (int n){
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n - i; j++){
            printf("*");
        }
        printf("\n");
    }
    return;
}

void triangleRU (int n){
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= i; j++){
            printf(" ");
        }
        for (int j = 1; j <= n-i; j++){
            printf("*");
        }
        printf("\n");
    }
    return;
}

void triangleRB (int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return;
}



int main(){
    char line[50] = "------------------------\n";
    triangleLB(5);
    printf("%s", line);
    triangleLU(5);
    printf("%s", line);
    triangleRU(5);
    printf("%s", line);
    triangleRB(5);
    return 0;
}