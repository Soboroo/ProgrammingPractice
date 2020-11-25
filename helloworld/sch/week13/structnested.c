#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point ptbl;
    struct point pttr;
};

int main(){
    struct rect target = {{80, 20}, {85, 35}};
    printf("point_bl is (%d, %d)\n", target.ptbl.x, target.ptbl.y);
    printf("point_tr is (%d, %d)\n", target.pttr.x, target.pttr.y);

    target.ptbl.x = 70; target.ptbl.y = 10;
    target.pttr.x = 95; target.pttr.y = 45;
    printf("point_bl is (%d, %d)\n", target.ptbl.x, target.ptbl.y);
    printf("point_tr is (%d, %d)\n", target.pttr.x, target.pttr.y);

    return 0;
}