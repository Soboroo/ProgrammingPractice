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
  cout << "20201517 우영윤" << endl;
  int i;
  cout << "이름과 전화 번호를 입력해 주세요" << endl;
  Person people[3];
  string name, tel;
  for (i = 0; i < 3; i++) {
    cout << "사람 " << i + 1 << ">> ";
    cin >> name >> tel;
    people[i].set(name, tel);
  }

  cout << "모든 사람의 이름은 ";
  for (i = 0; i < 3; i++)
    cout << people[i].getName() << " ";

  cout << "\n전화번호 검색합니다. 이름을 입력하세요>>";
  cin >> name;
  for (i = 0; i < 3; i++) {
    if (name == people[i].getName()) {
      cout << "전화 번호는 " << people[i].getTel() << endl;
      break;
    }
  }
  if (i == 3)
    cout << "해당 연락처를 찾을 수 없습니다." << endl;
}
