#include <stdio.h>

struct point{
    int x;
    int y;
};

int main(){
    struct point pt[2] = {{0, 0}, {50, 50}};
    int px, py;

    px = (pt[0].x + pt[1].x)/2;
    py = (pt[0].y + pt[1].y)/2;

    printf("(%d, %d)", px, py);

    return 0;
}