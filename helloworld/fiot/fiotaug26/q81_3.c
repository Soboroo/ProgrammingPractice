#include <stdio.h>

int main(){
    double num[3], ave;
    scanf("%lf %lf %lf", &num[0], &num[1], &num[2]);
    ave = (num[0] + num[1] + num[2]) / 3;
    printf("Average : %f Score : ", ave);
    if (ave >= 90) printf("A");
    else if (ave >= 80) printf("B");
    else if (ave >= 70) printf("C");
    else if (ave >= 50) printf("D");
    else printf("F");
    return 0;
}