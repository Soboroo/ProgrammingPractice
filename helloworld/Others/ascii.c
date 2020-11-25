#include <stdio.h>

int main(void)
{
    char aval = 'A';
    char bval = 'B';
    char cval = 'C';
    char dval = 'D';

    int gap = 'A' - 'a';

    aval -= gap;
    bval -= gap;
    cval -= gap;
    dval -= gap;
    
    printf("%c, %c, %c, %c\n", aval, bval, cval, dval);

    return 0;
}