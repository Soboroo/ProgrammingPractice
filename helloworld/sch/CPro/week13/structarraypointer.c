#include <stdio.h>

struct point{
    int x;
    int y;
};

int main(){
    struct point pnt[5] = {
        {0, 0},
        {10, 10},
        {20, 20},
        {30, 30},
        {40, 40}
    };
    struct point *p = &pnt[0];
    int i;

    for (i = 0; i < 5; i++)
        printf("(%d, %d)\n", pnt[i].x, (p + i)->y);

    return 0;
}