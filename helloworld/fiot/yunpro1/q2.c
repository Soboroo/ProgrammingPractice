#include <stdio.h>

void gop(int dan, int end){
    static int heng = 1;
    printf("%d * %d = %d\n", dan, heng++, dan * heng);
    if (heng == 10){
        if (dan == end) return;
        else dan++; heng = 1;
    }
    gop(dan, end);
}

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    n1 > n2 ? gop(n2, n1) : gop(n1, n2);
    return 0;
}