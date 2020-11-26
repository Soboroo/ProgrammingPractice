#include <stdio.h>

typedef int INT;
typedef int * PTRINT;

typedef unsigned int UINT;
typedef unsigned int * PTRUINT;

typedef unsigned char UCHAR;
typedef unsigned char * PTRUCHAR;

int main(){
    INT i = 10;
    PTRINT pi = &i;

    UINT ui = 20;
    PTRUINT pui = &ui;

    UCHAR uc = 'a';
    PTRUCHAR puc = &uc;

    printf("%d, %d, %c", *pi, *pui, *puc);

    return 0;
}