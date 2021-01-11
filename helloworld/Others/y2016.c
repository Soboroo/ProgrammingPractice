#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *solution(int a, int b)
{
	int num = 0;
	char day[7][4] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
	char *answer = (char *)malloc(4);
	for (int i = 1; i < a; i++)
		num += 30 + (i % (i > 7 ? 7 : 8) % 2) - (i == 2 ? 1 : 0);
	strcpy(answer, day[(num + b) % 7]);
	return answer;
}

int main()
{
	printf("%s", solution(5, 24));
	return 0;
}