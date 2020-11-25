#include <stdio.h>

int main(){
    int arr[2][2][2][2];
    int n = 0;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++){
                for (int l = 0; l < 2; l++)
                    arr[i][j][k][l] = n++;
            }
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++){
                for (int l = 0; l < 2; l++)
                    printf("%d\n", arr[i][j][k][l]);
            }
        }
    }

    return 0;
}