#include <stdio.h>

int main(){
    int i = 0, j;
    while(i < 5){ //0���� 4���� : 5ȸ �ݺ� -> 5�� ���
        j = 0;
        while(j < i){ //i��° �ٿ��� i�� "o"�� ��� : 0��° �� - 0��, 1��° �� - 1�� ...
            printf("o");
            j++;
        }
        printf("*\n");
        i++;
    }
    return 0;
}