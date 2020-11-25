#include <stdio.h>

int main(){
    int a, b, i, dsum = 0, month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d", &a, &b);
    for (i = 0; i < a-1; i++){
        dsum+=month[i];
    }
    switch ((dsum+b) % 7){
        case 0:
        printf("SUN");
        break;
        case 1:
        printf("MON");
        break;
        case 2:
        printf("TUE");
        break;
        case 3:
        printf("WED");
        break;
        case 4:
        printf("THU");
        break;
        case 5:
        printf("FRI");
        break;
        case 6:
        printf("SAT");
        break;
    }
    return 0;
}