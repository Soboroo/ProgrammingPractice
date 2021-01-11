#include <iostream>
using namespace std;

class Calculator
{
private:
	double a;
	double b;
	int num[4];

public:
	void Init();
	double Add(double, double);
	double Min(double, double);
	double Mul(double, double);
	double Div(double, double);
	void ShopOpCount();
};

int main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShopOpCount();
	return 0;
}

void Calculator::Init()
{
	a = 0;
	b = 0;
	for (int i = 0; i < 4; i++)
		num[i] = 0;
}

double Calculator::Add(double a, double b)
{
	num[0]++;
	return a + b;
}

double Calculator::Min(double a, double b)
{
	num[1]++;
	return a - b;
}

double Calculator::Mul(double a, double b)
{
	num[2]++;
	return a * b;
}

double Calculator::Div(double a, double b)
{
	num[3]++;
	return b ? a / b : NULL;
}

void Calculator::ShopOpCount()
{
	cout << "덧셈: " << num[0] << " 뺄셈: " << num[1] << " 곱셈: " << num[2] << " 나눗셈: " << num[3] << endl;
}