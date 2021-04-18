#include <stdio.h>

struct point{
    int x, y;
};
typedef struct point POINT;

typedef struct {
    POINT ptbl;
    POINT pttr;
} RECT;

int main(){
    POINT pt = {10, 20};

    printf("(x, y) is (%d, %d).\n", pt.x, pt.y);

    RECT r = {{80, 20}, {85, 35}};

    printf("Bottomleft is (%d, %d), topright is (%d, %d).", r.ptbl.x, r.ptbl.y, r.pttr.x, r.pttr.y);

    return 0;
}