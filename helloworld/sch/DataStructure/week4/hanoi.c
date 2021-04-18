#include <stdio.h>

void hanoi(int n, int start, int work, int target)
{
	if (n == 1)
	{
		printf("%c에서 원판 %d를 %c로 옮김\n", start, n, target);
	}
	else
	{
		hanoi(n - 1, start, target, work);
		hanoi(1, start, work, target);
		hanoi(n - 1, work, start, target);
	}
}

int main()
{
	hanoi(3, 'A', 'B', 'C');
}