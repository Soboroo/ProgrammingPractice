#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *solution(const char *phone_number)
{
	int len = 0;
	for (len = 0; phone_number[len]; len++)
		;
	char *answer = (char *)malloc(len);
	strcpy(answer, phone_number);
	for (int i = 0; i < len - 4; i++)
	{
		answer[i] = '*';
	}
	return answer;
}

int main()
{
	printf("%s", solution("0233334444"));
	return 0;
}