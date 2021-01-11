#include <iostream>
using namespace std;

class Printer
{
private:
	const char *str;

public:
	void SetString(const char *);
	void ShowString();
};

int main()
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}

void Printer::SetString(const char *input)
{
	str = input;
}

void Printer::ShowString()
{
	cout << str << endl;
}