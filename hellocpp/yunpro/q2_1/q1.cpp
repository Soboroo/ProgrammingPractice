#include <iostream>
using namespace std;

void increase(int &ref);
void reverse(int &ref);

int main()
{
	int a, b;
	cout << "Number :";
	cin >> a;
	b = a;
	increase(a);
	reverse(b);
	cout << "increase(): " << a << endl;
	cout << "reverse(): " << b << endl;
	return 0;
}

void increase(int &ref)
{
	ref++;
}

void reverse(int &ref)
{
	ref *= -1;
}