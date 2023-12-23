#include <iostream>
using namespace std;

int main()
{
	int a, n, x, y;
	cin >> a >> n;
	int sum = 0;
	while (n--)
	{
		cin >> x >> y;
		sum += x * y;
	}
	cout << (sum == a ? "Yes" : "No") << endl;
}