#include <stdio.h>

int CelToFah(int Cel){
    return 1.8 * Cel + 32;
}

int FahToFah(int Fah){
    return (Fah - 32) / 1.8;
}

int main(){
    int temp, unit;
    do{
        printf("Type Temperature and its Unit(0 for Cel, 1 for Fah)\n");
        scanf("%d %d", &temp, &unit);
    } while(!(unit == 0 || unit == 1));
    if (unit == 0) printf("%d Cel = %d Fah", temp, CelToFah(temp));
    else if (unit == 1) printf("%d Fah = %d Cel", temp, FahToFah(temp));

    return 0;
}