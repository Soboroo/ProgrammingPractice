#include <stdio.h>
#include <math.h>

int fibo(int n)
{
	int mod = 1234567;
	return n < 2 ? n : (((fibo(n - 1) % mod) + (fibo(n - 2) % mod)) % mod);
}

int main()
{
	printf("%d", fibo(50));
	return 0;
}