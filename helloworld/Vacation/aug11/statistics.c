#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int static compare(const void *first, const void *second){
    if (*(int*)first > *(int*)second) return 1;
    else if (*(int*)first < *(int*)second) return -1;
    else return 0;
}

int main(){
    int i, j, n, k = 0, sum = 0, cont = 0;
    scanf("%d", &n);
    int num[n], numcarr[n], numcont[2][4001] = {0, };
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        sum+=num[i];
        if (num[i] < 0) numcont[0][num[i] * -1]++;
        else numcont[1][num[i]]++;
    }
    for (i = 0; i < 2; i++){
        for (j = 0; j <= 4000; j++){
            if (numcont[i][j] > cont){
                cont = numcont[i][j];
            }
        }
    }
    for (i = 0; i < 2; i++){
        for (j = 0; j <= 4000; j++){
            if (numcont[i][j] == cont){
                numcarr[k] = j * (i == 0 ? -1 : 1);
                k++;
            }
        }
    }
    qsort(num, n, sizeof(int), compare);
    qsort(numcarr, k, sizeof(int), compare);
    printf("%d\n", (int)floor(((double)sum/n)+0.5));
    printf("%d\n", num[((n+1)/2)-1]);
    printf("%d\n", k == 1 ? numcarr[0] : numcarr[1]);
    printf("%d", num[n-1] - num[0]);
}