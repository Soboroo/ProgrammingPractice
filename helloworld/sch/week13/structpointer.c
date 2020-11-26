#include <stdio.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point ptbl;
    struct point pttr;
};

int main(){
    struct point o = {10, 20};
    struct point *p = &o;

    printf("%d %d\n", (*p).x, (*p).y);
    printf("%d %d\n", p->x, p->y);

    struct rect r = {{1, 2}, {3, 4}};
    struct rect *pr = &r;
    printf("%d %d %d %d", r.ptbl.x, (*pr).ptbl.x, pr->ptbl.x, (pr->ptbl).x);
    return 0;
}