#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char *solution(int n)
{
	int i = 0;
	char *answer = (char *)malloc(sizeof(char) * n * 3 + 1);
	const char *su = "수";
	const char *bak = "박";
	while (i < n * 3)
	{
		if (i / 3 % 2)
		{
			for (int j = 0; j < 3; i++, j++)
				answer[i] = bak[j];
		}
		else
		{
			for (int j = 0; j < 3; i++, j++)
				answer[i] = su[j];
		}
	}
	answer[i] = '\0';
	return answer;
}

int main()
{
	printf("%s", solution(5));
	return 0;
}