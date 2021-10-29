#include <iostream>
using namespace std;

// a = 97
// A = 65
char &tolower(char a[], int &cnt, bool &success) {
  char *answer = a;
  for (char *ptr = a; *ptr; ptr++) {
    if (*ptr <= 'Z') {
      cnt++;
      *ptr += 32;
      if (cnt == 1)
        answer = ptr;
    }
  }
  success = cnt ? true : false;
  return *answer;
}

int main() {
  cout << "20201517 우영윤" << endl;
  char s[] = "MIke";
  bool b = false;
  int num;
  char &loc = tolower(s, num, b);
  if (b == false) {
    cout << "대문자를 발견할 수 없습니다" << endl;
    return 0;
  }
  cout << s << endl;
  cout << num << "개의 문자를 변경하였습니다" << endl;
  loc = 'n';
  cout << s << endl;
}