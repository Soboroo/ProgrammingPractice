#include <stdio.h>

int main()
{
    int i;
    int note[9];
    for (i = 0; i < 8; i++) scanf("%d", &note[i]);
    if (note[0] == 1 && note[1] == 2 && note[2] == 3 && note[3] == 4 && note[4] == 5 && note[5] == 6 && note[6] == 7 && note[7] == 8) printf("ascending");
    else if (note[0] == 8 && note[1] == 7 && note[2] == 6 && note[3] == 5 && note[4] == 4 && note[5] == 3 && note[6] == 2 && note[7] == 1) printf("descending");
    else printf("mixed");
    return 0;
}