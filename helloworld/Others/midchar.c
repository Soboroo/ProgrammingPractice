#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *solution(const char *s)
{
	int i = 0, j = strlen(s) % 2 ? strlen(s) / 2 : strlen(s) / 2 - 1;
	char *answer = (char *)malloc(strlen(s) % 2 ? 2 : 3);
	while (i < (strlen(s) % 2 ? 1 : 2))
	{
		answer[i++] = s[j++];
	}
	answer[i] = '\0';
	return answer;
}

int main()
{
	printf("%s", solution("qwer"));
	return 0;
}