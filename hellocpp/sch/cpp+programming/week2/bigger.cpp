#include <iostream>
using namespace std;

int bigger(int a, int b) { return a > b ? a : b; }

bool dividedBy3(int n) { return n % 3 == 0; }

int main() {
  int a, b, n;
  cout << "두 개의 정수 입력>>";
  cin >> a >> b;
  n = bigger(a, b);
  cout << a << "와 " << b << "중 큰 값은 " << n << "입니다.\n";
  cout << n
       << (dividedBy3(n) ? "은 3의 배수입니다.\n"
                         : "은 3의 배수가 아닙니다.\n");
}
