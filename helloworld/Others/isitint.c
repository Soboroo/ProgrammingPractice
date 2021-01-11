#include <stdio.h>
#include <math.h>

long long solution(long long n)
{
	long long answer = 0;
	double num = sqrt((double)n);
	if (num - (int)num)
	{
		answer = -1;
	}
	else
	{
		answer = (long long)(((int)num + 1) * ((int)num + 1));
	}
	return answer;
}

int main()
{
	printf("%lld", solution(3));
	return 0;
}