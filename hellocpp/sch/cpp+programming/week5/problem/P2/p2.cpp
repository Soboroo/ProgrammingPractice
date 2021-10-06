// Encoded in UTF-8(65001)
// Compile with g++ (MinGW)

#include <iostream>
#include <string>
using namespace std;

int byIndex(string str) {
  int result = 0;
  for (int i = 0; i < str.length(); i++)
    result += str[i] == 'a';
  return result;
}

int byFind(string str) {
  int result = 0, index = -1;
  while ((index = str.find('a', index + 1)) != -1)
    result++;
  return result;
}

int main() {
  cout << "20201517 우영윤" << endl;
  string str;
  cout << "문자열 입력>> ";
  getline(cin, str);

  cout << "문자 a는 " << byIndex(str) << "개 있습니다." << endl;
  cout << "문자 a는 " << byFind(str) << "개 있습니다." << endl;
}