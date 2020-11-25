#include <stdio.h>

int main()
{
    int tot;
    float ave;
    char name[10];

    printf("√—¡°, ∆Ú±’, ¿Ã∏ß¿ª ¿‘∑¬«œººø‰ : ");
    scanf("%d, %f, %s", &tot, &ave, name);

    printf("√—¡°: %d\n", tot);
    printf("∆Ú±’: %5.2f\n", ave);
    printf("¿Ã∏ß: %s\n", name);

    return 0;
}