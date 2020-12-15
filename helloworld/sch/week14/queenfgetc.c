#include <stdio.h>

int main(){
    FILE *fp;
    char str[2000];
    char *p = str;

    if ((fp = fopen("queen.txt", "rt")) != NULL){
        while((*p++ = fgetc(fp)) != EOF);
        fclose(fp);
        *--p = '\0';

        printf(str);
    }else{
        printf("File open error!!!\n");
    }
    return 0;
}