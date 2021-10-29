#include <iostream>
using namespace std;

int main() {
  cout << "20201517 우영윤" << endl;
  int a, b;
  cout << "첫 번째 수: ";
  cin >> a;
  cout << "두 번째 수: ";
  cin >> b;
  int na, nb;
  if (b < a) {
    na = b;
    nb = a;
  } else {
    na = a;
    nb = b;
  }

  int sum = 0;
  for (int i = na; i <= nb; i++) {
    sum += i;
  }
  cout << a << " 에서" << b << " 까지 더한 결과는 " << sum << " 입니다."
       << endl;
}