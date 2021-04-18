#include <stdio.h>

int GCD(int x, int y)
{
	int z;
	for (z = x > y ? y : x; !(x % z == 0 && y % z == 0); z--)
	{
	}
	return z;
}

int main()
{
	int a, b;
	printf("최대공약수를 구할 2개의 수를 입력하시오: ");
	scanf("%d, %d", &a, &b);
	printf("%d와 %d의 최대공약수는 %d\n", a, b, GCD(a, b));
	return 0;
}