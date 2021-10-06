// Encoded in UTF-8(65001)
// Compile with g++ (MinGW)

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "20201517 우영윤" << endl;
  int index;
  string str;
  char tmp;
  cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
  srand((unsigned)time(0));
  while (true) {
    cout << ">>";
    getline(cin, str);
    if (str == "exit")
      break;

    do {
      do {
        index = rand() % str.length();
      } while (str[index] == ' ');
      tmp = str[index];
      str[index] = (rand() % 26) + (rand() % 2 ? 'A' : 'a');
    } while (tmp == str[index]);
    cout << str << endl;
  }
}