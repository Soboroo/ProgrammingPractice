#include <bits/stdc++.h>
using namespace std;

void fizzbuzz(int i)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		cout << "FizzBuzz\n";
	}
	else if (i % 3 == 0)
	{
		cout << "Fizz\n";
	}
	else if (i % 5 == 0)
	{
		cout << "Buzz\n";
	}
	else
	{
		cout << i << '\n';
	}
}

int main()
{
	string s, t, u;
	cin >> s >> t >> u;
	if ('0' <= u[0] && u[0] <= '9')
	{
		fizzbuzz(stoi(u) + 1);
	}
	else if ('0' <= t[0] && t[0] <= '9')
	{
		fizzbuzz(stoi(t) + 2);
	}
	else if ('0' <= s[0] && s[0] <= '9')
	{
		fizzbuzz(stoi(s) + 3);
	}
}