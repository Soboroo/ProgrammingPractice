#include <stdio.h>

int main()
{
    int num;

    printf("Á¤¼ö : ");
    scanf("%d", &num);

    num % 2 == 1 ? printf("È¦¼öÀÓ\n") : printf("Â¦¼öÀÓ\n");

    return 0;
}