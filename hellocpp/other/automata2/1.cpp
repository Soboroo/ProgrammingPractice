#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin >> a;
	int n = a.size() - 2;
	int d = 1;
	for (int i = 0; i < n; i++)
	{
		d *= 10;
	}
	cout << "YES\n"
			 << stoi(a.substr(2)) << ' ' << d;
}