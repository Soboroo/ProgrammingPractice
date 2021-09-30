#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
  srand((unsigned)time(0));
  while (true) {
    cout << ">>";
    getline(cin, str);
    if (str == "exit")
      break;

    str[rand() % str.length()] = (rand() % 26) + (rand() % 2 ? 'A' : 'a');
    cout << str << endl;
  }
}