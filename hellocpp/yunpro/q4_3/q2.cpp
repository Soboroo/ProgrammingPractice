#include <iostream>
using namespace std;

namespace COMP_POS
{
	enum
	{
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};
};

class NameCard
{
private:
	const char *name, *corpname, *number;
	int position;

public:
	NameCard(const char *name, const char *coname, const char *num, int pos) : name(name), corpname(coname), number(num), position(pos) {}
	void ShowNameCardInfo() const;
};

int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}

void NameCard::ShowNameCardInfo() const
{
	cout << "이름: " << name << endl;
	cout << "회사: " << corpname << endl;
	cout << "전화번호: " << number << endl;
	cout << "직급: ";
	switch (position)
	{
	case 0:
		cout << "사원";
		break;
	case 1:
		cout << "주임";
		break;
	case 2:
		cout << "대리";
		break;
	case 3:
		cout << "과장";
		break;
	default:
		break;
	}
	cout << endl
			 << endl;
}