#include <iostream>
using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	if (n >= 1000)
		if (m >= 8000 || k >= 260)
			cout << "Very Good";
		else
			cout << "Good";
	else
		cout << "Bad";
}