#include <stdio.h>

int main()
{
    int number;
    char addr[10], name[20], vote;

    printf("접수번호 : ");
    scanf("%d", &number);

    fflush(stdin);

    printf("주소 : ");
    gets(addr);

    printf("이름 : ");
    gets(name);

    printf("찬성-Y 반대-N : ");
    vote = getchar();

    printf("\n\n접수번호 : %d\n주소 : %s\n이름 : %s\n투표 : %c\n", number, addr, name, vote);
    return 0;
}