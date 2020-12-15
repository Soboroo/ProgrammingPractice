#include <stdio.h>

int main(){
    FILE *fp;
    char str[50][100];
    char (*p)[100] = str;
    int num = 0, i = 0;
    
    if ((fp = fopen("queen.txt", "rt")) != NULL){
        while(fgets(*p++, 100, fp) != NULL)
            num++;

        while (i < num)
            printf("%s", str[i++]);
    }else{
        printf("File open error!!!\n");
    }
    return 0;
}