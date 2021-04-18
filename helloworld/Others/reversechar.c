#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int static compare(const void *first, const void *second)
{
	if (*(char *)first > *(char *)second)
		return -1;
	else if (*(char *)first < *(char *)second)
		return 1;
	else
		return 0;
}

char *solution(const char *s)
{
	char *answer = (char *)malloc(strlen(s));
	strcpy(answer, s);
	qsort(answer, strlen(s), sizeof(char), compare);
	return answer;
}

int main()
{
	printf("%s", solution("RLEPWEMAANTORTANEP"));
	return 0;
}