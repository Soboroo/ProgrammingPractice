#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, ans = 0;
	cin >> n;
	vector<vector<bool>> visited1(1000, vector<bool>(1000)); // x > 0 y > 0
	vector<vector<bool>> visited2(1000, vector<bool>(1000)); // x < 0 y > 0
	vector<vector<bool>> visited3(1000, vector<bool>(1000)); // x < 0 y < 0
	vector<vector<bool>> visited4(1000, vector<bool>(1000)); // x > 0 y < 0
	bool visited5 = false;
	bool visited6 = false;
	bool visited7 = false;
	bool visited8 = false;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		if (x > 0 && y > 0)
		{
			x = abs(x);
			y = abs(y);
			int g = gcd(x, y);
			x /= g;
			y /= g;
			if (!visited1[x][y])
			{
				visited1[x][y] = true;
				ans++;
			}
		}
		else if (x < 0 && y > 0)
		{
			x = abs(x);
			y = abs(y);
			int g = gcd(x, y);
			x /= g;
			y /= g;
			if (!visited2[x][y])
			{
				visited2[x][y] = true;
				ans++;
			}
		}
		else if (x < 0 && y < 0)
		{
			x = abs(x);
			y = abs(y);
			int g = gcd(x, y);
			x /= g;
			y /= g;
			if (!visited3[x][y])
			{
				visited3[x][y] = true;
				ans++;
			}
		}
		else if (x > 0 && y < 0)
		{
			x = abs(x);
			y = abs(y);
			int g = gcd(x, y);
			x /= g;
			y /= g;
			if (!visited4[x][y])
			{
				visited4[x][y] = true;
				ans++;
			}
		}
		else if (x == 0 && y > 0)
		{
			if (!visited5)
			{
				visited5 = true;
				ans++;
			}
		}
		else if (x == 0 && y < 0)
		{
			if (!visited6)
			{
				visited6 = true;
				ans++;
			}
		}
		else if (x > 0 && y == 0)
		{
			if (!visited7)
			{
				visited7 = true;
				ans++;
			}
		}
		else if (x < 0 && y == 0)
		{
			if (!visited8)
			{
				visited8 = true;
				ans++;
			}
		}
	}
	cout << ans;
}