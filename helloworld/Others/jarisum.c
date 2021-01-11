#include <stdio.h>

int solution(int n)
{
	return n ? n % 10 + solution(n / 10) : n;
}

int main()
{
	printf("%d", solution(987));
	return 0;
}