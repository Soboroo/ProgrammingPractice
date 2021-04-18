#include <stdio.h>
#include <stdbool.h>

int solution(const char *s)
{
	int len = 0, index = 0;
	while (*s)
	{
		if (*s == '(')
			index++;
		else if (*s == ')')
		{
			if (!index)
				return 0;
			else
				index--;
		}
		s++;
	}
	return index ? 0 : 1;
}

int main()
{
	int a = solution("(()()()");
	printf("%d\n", a);
	return 0;
}