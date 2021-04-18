#include <iostream>
using namespace std;

void menu();

class Account
{
	private:
		const int accNum;
		const char *name;
		int balance;
	public:
		Account(int accNum, const char *name, int balance) : accNum(accNum), name(name), balance(balance) {}

};

int main(){

}

void menu()
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택: ";
}