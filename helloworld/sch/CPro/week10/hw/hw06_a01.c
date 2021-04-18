#include <stdio.h>

int main(){
    char cArr[2] = {'a', 'b'};
    int iArr[2] = {0, 1};
    double dArr[2] = {0.1, 0.2};

    char text[] = "The address of";

    printf("The size of cArr, iArr, dArr is %d %d %d.\n", sizeof(cArr), sizeof(iArr), sizeof(dArr));

    printf("%s cArr is %p.\n", text, cArr);
    printf("%s cArr[0] is %p.\n", text, &cArr[0]);
    printf("%s cArr[1] is %p.\n", text, &cArr[1]);

    printf("%s iArr is %p.\n", text, iArr);
    printf("%s iArr[0] is %p.\n", text, &iArr[0]);
    printf("%s iArr[1] is %p.\n", text, &iArr[1]);

    printf("%s dArr is %p.\n", text, dArr);
    printf("%s dArr[0] is %p.\n", text, &dArr[0]);
    printf("%s dArr[1] is %p.\n", text, &dArr[1]);

    return 0;
}