#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int num[5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		num[i] = rand() % 100;
		cout << "num[" << i << "]: " << num[i] << endl;
	}

	return 0;
}