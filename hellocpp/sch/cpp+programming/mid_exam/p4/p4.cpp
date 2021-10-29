#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

class Person {
  string name;

public:
  Person() {}
  Person(string name) { this->name = name; }
  void setname(string name) { this->name = name; }
  string getname() { return name; }
};

class UpAndDownGame {
public:
  static void run() {
    Person player[2];
    string tmp;
    srand((unsigned)time(0));
    int n = rand() % 100;

    cout << "첫번째 플레이어의 이름은 무엇입니까? ";
    cin >> tmp;
    player[0].setname(tmp);

    cout << "두번째 플레이어의 이름은 무엇입니까? ";
    cin >> tmp;
    player[1].setname(tmp);

    cout << "Up & Down 게임을 시작힙니다.\n첫번째 플레이어부터 번호를 "
            "말해주십시오.\n\n";

    int who = 1, min = 0, max = 99, answer;
    while (true) {
      cout << "답은 " << min << "과 " << max << "사이에 있습니다." << endl;
      cout << player[(who = !who)].getname() << ">>";
      cin >> answer;
      if (answer == n) {
        cout << player[who].getname()
             << "이 이겼습니다. 축하합니다. 456억을 가져가세요!" << endl;
        return;
      } else if (answer < n)
        min = answer;
      else if (answer > n)
        max = answer;
    }
  }
};

int main() {
  cout << "20201517 우영윤" << endl;
  UpAndDownGame::run();
}
