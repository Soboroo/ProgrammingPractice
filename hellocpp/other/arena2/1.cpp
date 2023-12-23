#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll n, a = 0, b = 0, c = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a += i;
		c += i * i * i;
	}
	cout << a << '\n'
			 << a * a << '\n'
			 << c;
}