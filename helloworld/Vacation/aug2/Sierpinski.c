#include <stdio.h>
#include <math.h>

int sier(int, int);

int main(){
    int n;
    scanf("%d", &n);
    sier(0, n);
}

int sier(int k, int l){
    int a = (int)pow(3, k), b = l / (int)pow(3, k+1), i, j, x, y, nemo[l+1][l+1];
    //printf("%d %d %d\n", k, a, b);
    if (k == 0){
        for (i = 1; i <= 27; i++){
            for (j = 1; j <= 27; j++) nemo[i][j] = 0;
        }
    }
    for (i = 1 + b; i <= (1 + b) + (b * 3) * (a - 1); i += b * 3){
        for (j = 1 + b; j <= (1 + b) + (b * 3) * (a - 1); j += b * 3){
            for (x = i; x <= i + (b-1); x++){
                for (y = j; y <= j + (b-1); y++){
                    nemo[x][y] = 1;
                }
            }
        }
    }
    if (l / (int)pow(3, k+1) == 1) {
        for (i = 1; i <= l; i++){
            for (j = 1; j <= l; j++){
                if (nemo[i][j] == 1) printf(" ");
                else printf("*");
            }
            printf("\n");
        }    
        return 0;
    }
    else sier(k+1, l);
}