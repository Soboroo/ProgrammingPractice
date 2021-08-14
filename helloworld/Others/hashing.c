#include <stdio.h>
#include <stdlib.h>

long long seed(int n)
{
	return n ? ((31L * (long long)(seed(n - 1) % 1234567891)) % 1234567891) : 1;
}

int main()
{
	int len, i = 0;
	long long answer = 0;
	char *arr;
	scanf("%d", &len);
	arr = (char *)malloc(len + 3);
	scanf("%s", arr);
	for (char *p = arr; *p; p++)
		answer += (*p - 96) * (long long)seed(i++);
	printf("%lld", answer % 1234567891);
}