// Encoded in EUC-KR(949)
// Compile with Visual C++ (vsdevcmd)

#include <iostream>
#include <string>
using namespace std;

class Person {
  string name;
  string tel;

public:
  Person();
  string getName() { return name; }
  string getTel() { return tel; }
  void set(string name, string tel);
};

Person::Person() {}
void Person::set(string name, string tel) {
  this->name = name;
  this->tel = tel;
}

int main() {
  cout << "20201517 �쿵��" << endl;
  int i;
  cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
  Person people[3];
  string name, tel;
  for (i = 0; i < 3; i++) {
    cout << "��� " << i + 1 << ">> ";
    cin >> name >> tel;
    people[i].set(name, tel);
  }

  cout << "��� ����� �̸��� ";
  for (i = 0; i < 3; i++)
    cout << people[i].getName() << " ";

  cout << "\n��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
  cin >> name;
  for (i = 0; i < 3; i++) {
    if (name == people[i].getName()) {
      cout << "��ȭ ��ȣ�� " << people[i].getTel() << endl;
      break;
    }
  }
  if (i == 3)
    cout << "�ش� ����ó�� ã�� �� �����ϴ�." << endl;
}
