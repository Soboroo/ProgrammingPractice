#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *solution(const char *s)
{
	int i, j;
	char *answer = (char *)malloc(strlen(s));
	for (i = 0, j = 0; i < strlen(s); j = s[i++] == ' ' ? 0 : j)
	{
		if (s[i] != ' ')
		{
			if (j % 2)
				answer[i] = s[i];
			else
				answer[i] = s[i] + 32;
		}
		else
			answer[i] = ' ';
	}
	answer[i] = '\0';
	return answer;
}

int main()
{
}