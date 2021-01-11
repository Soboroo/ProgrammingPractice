#include <stdio.h>
#include <stdlib.h>

int intlen(long long n)
{
	return n ? 1 + intlen(n / 10) : 0;
}

//int *solution(long long n)
//{
//int *answer = (int*)malloc();
//return answer;
//}

int main()
{
	printf("%d", intlen(12345));
	return 0;
}