#include <stdio.h>
#include <stdlib.h>

int search(int a[], int size, int num){
    int i = 0;
    a[size] = num;
    printf("   |  ");
    for(i = 0; i < size; i++){
        printf("%-3d", i);
    }
    printf("\n---+--");
    for(i = 0; i < size; i++){
        printf("---");
    }
    printf("\n");
    for(i = 0; a[i] != num; i++){
        printf("   |  ");
        for(int j = 0; j < i; j++){
            printf("   ");
        }
        printf("*\n%3d|", i);
        for(int j = 0; j < size; j++){
            printf("%3d", a[j]);
        }
        printf("\n   |\n");
    }
    return i == num ? -1 : i;
}

int main(){
    int n, *a, num, result;
    printf("array size : ");
    scanf("%d", &n);
    a = (int*)malloc(n+1);
    for (int i = 0; i < n; i++){
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("Number to Search : ");
    scanf("%d", &num);
    
    result = search(a, n, num);

    if (result == -1)
        printf("Search Fail");
    else
        printf("Number %d is in the a[%d]", num, result);
    return 0;
}