#include <stdio.h>

int iftest(int a){
    if (a % 4 == 0)
        if (a % 3 == 0)
            return 2;
        else
            return 1;
    else
        return 0;
}

int main(){
    for (int i = 1; i <= 50; i++)
        printf("Num: %d  iftest: %d\n", i, iftest(i));
    return 0;
}