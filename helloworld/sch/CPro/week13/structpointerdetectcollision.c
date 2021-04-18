#include <stdio.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point ptbl;
    struct point pttr;
};

int detect(struct point, struct rect);

int main(){
    struct rect target = {{80, 20}, {85, 35}};
    struct point pt[10] = {
        {0, 0},
        {10, 18},
        {20, 32},
        {30, 42},
        {40, 48},
        {50, 50},
        {60, 48},
        {70, 42},
        {80, 32},
        {90, 18}
    };
    int i;
    for (i = 0; i < 10; i++){
        if (detect(pt[i], target))
            printf("(%2d, %2d): Hit!\n", pt[i].x, pt[i].y);
        else
            printf("(%2d, %2d): Not Hit!\n", pt[i].x, pt[i].y);
    }
    return 0;
}

int detect(struct point pt, struct rect t){
    return pt.x >= t.ptbl.x && pt.x <= t.pttr.x && pt.y >= t.ptbl.y && pt.y <= t.pttr.y;
}