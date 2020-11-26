#include <stdio.h>

typedef struct{
    int x, y;
} POINT;

int main(){
    POINT pos = {0, 0};
    char str[] = {"UULDRUURRRLD"};
    char *p = str;

    while(*p){
        if(*p == 'U') pos.y++;
        else if(*p == 'D') pos.y--;
        else if(*p == 'R') pos.x++;
        else if(*p == 'L') pos.x--;
        printf("The position is (%+d, %+d)\n", pos.x, pos.y);
        p++;
    }

    return 0;
}