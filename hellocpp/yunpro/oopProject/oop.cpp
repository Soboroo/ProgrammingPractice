#include <iostream>
using namespace std;

typedef struct
{
	int accNum;
	char name[20];
	int balance;
} bank;

void manu();
void makeAcc(bank *);
void insert(bank *, int);
void withdrow(bank *, int);
void printAll(bank *, int);

int main()
{
	int a, i = 0;
	bank arr[20];
	while (1)
	{
		manu();
		do
		{
			cin >> a;
			cout << endl;
		} while (a > 5 || a < 1);
		switch (a)
		{
		case 1:
			makeAcc(&arr[i++]);
			break;
		case 2:
			insert(arr, 20);
			break;
		case 3:
			withdrow(arr, 20);
			break;
		case 4:
			printAll(arr, i);
			break;
		case 5:
			return 0;
		}
	}
}

void manu()
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택: ";
}

void makeAcc(bank *a)
{
	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> a->accNum;
	cout << "이름: ";
	cin >> a->name;
	cout << "입금액: ";
	cin >> a->balance;
}

void insert(bank *list, int size)
{
	int a, b, i;
	cout << "[입   금]" << endl;
	cout << "계좌ID: ";
	cin >> a;
	for (i = 0; i < size; i++)
	{
		if (list[i].accNum == a)
		{
			cout << "입금액: ";
			cin >> b;
			list[i].balance += b;
			cout << "입금완료" << endl;
			return;
		}
	}
	cout << "검색결과가 없습니다." << endl;
}

void withdrow(bank *list, int size)
{
	int a, b, i;
	cout << "[출   금]" << endl;
	cout << "계좌ID: ";
	cin >> a;
	for (i = 0; i < size; i++)
	{
		if (list[i].accNum == a)
		{
			cout << "출금액: ";
			cin >> b;
			if (b > list[i].balance)
				cout << "입력한 금액이 잔고보다 많습니다." << endl;
			else
			{
				list[i].balance -= b;
				cout << "출금완료" << endl;
			}
		}
	}
	cout << "검색결과가 없숩니다." << endl;
}

void printAll(bank *list, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "계좌ID: " << list[i].accNum << endl;
		cout << "이름: " << list[i].name << endl;
		cout << "잔액: " << list[i].balance << endl
				 << endl;
	}
}