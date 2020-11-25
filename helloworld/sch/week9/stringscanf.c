#include <stdio.h>

void case1();
void case2();
void case3();

int main(){
    int a;

    while(1){
        do{
            printf("Input case number: ");
            scanf("%d", &a);
            getchar();
        }while(!(a > -1 && a < 4));

        switch(a){
            case 0: return 0;
            case 1: case1(); break;
            case 2: case2(); break;
            case 3: case3(); break;
            default:;
        }

        printf("\n");
    }

    return 0;
}

void case1(){
    char str[100];
    printf("\nInput \"Hello\": ");
    scanf("%s", str);
    printf("%s\n", str);
}

void case2(){
    char cArr[100];
    printf("\nInput \"Hello, World!\": ");
    scanf("%s", cArr);
    printf("%s\n", cArr);
    scanf("%*s");
}

void case3(){
    char cArray[100];
    printf("\nInput \"Hello, World!\": ");
    gets(cArray);
    printf("%s\n", cArray);
}