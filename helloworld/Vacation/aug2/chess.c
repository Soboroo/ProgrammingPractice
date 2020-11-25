#include <stdio.h>

int main(){
    int a, b, i, j, k, l, su = 0, min = 3000, mod;
    scanf("%d %d", &a, &b);
    char input[b+1];
    int pan[a+1][b+1];
    getchar();
    for (i = 1; i <= a; i++){
        gets(input);
        for (j = 1; j <= b; j++) pan[i][j] = input[j-1] == 'W' ? 1 : 0; //W -> 1, B -> 0
    }
    for (mod = 0; mod <= 1; mod++){
        for (i = 1; i <= a-7; i++){
            for (j = 1; j <= b-7; j++){
                for (k = i; k <= i+7; k++){
                    for (l = j; l <= j+7; l++){
                        if (mod == 0){
                            if ((k + l) % 2 == 0 && pan[k][l] != 0) su+=1;
                            else if ((k + l) % 2 != 0 && pan[k][l] != 1) su+=1;
                        }
                        if (mod == 1){
                            if ((k + l) % 2 == 0 && pan[k][l] != 1) su+=1;
                            else if ((k + l) % 2 != 0 && pan[k][l] != 0) su+=1;
                        }
                    }
                }
                if (su < min) min = su;
                su = 0;
            }
        }
    }
    /*
    for (i = 1; i <= a; i++){
        for (j = 1; j <= b; j++) printf("%d", pan[i][j]);
        printf("\n");
    }
    */
    printf("%d", min);
    return 0;
}